// Programm for a cash register program that provide the user with best amount of coins to return to customer
function checkCashRegister(price, cash, cid) {
    //change all decimals to whole numbers for ease
    //First work out how much change is needed
    var change = (cash * 100) - (price * 100); //change in cents
    var currentStatus = ''; //current status of the register
    
    //Next work out how much cash there is in the cash register using
    //reduce to add all the values and turn to whole numbers
    var totalCash = cid.reduce(function(accum, current){
      accum = accum + (current[1]*100);
      return accum;
    }, 0);
    
    //Next set up the coins array/object with empty values, 
    //and the coin denomination, e.g Penny = 1 and dollar = 100 pennies
    var coins = [
      {name: "ONE HUNDRED", value: 0, denomination: 10000},
      {name: "TWENTY", value: 0, denomination: 2000},
      {name: "TEN", value: 0, denomination: 1000},
      {name: "FIVE", value: 0, denomination: 500},
      {name: "ONE", value: 0, denomination: 100},
      {name: "QUARTER", value: 0, denomination: 25},
      {name: "DIME", value: 0, denomination: 10},
      {name: "NICKEL", value: 0, denomination: 5},
      {name: "PENNY", value: 0, denomination: 1},
      ];
    
    //from the info passed to the function add the values for each coin into
    //the cash register objects.
    coins.map(function(element){
      for(var i = 0; i < cid.length; i++){
        if(cid[i][0] === element.name){
          element.value = parseFloat(Number(cid[i][1]*100).toFixed()); //remove decimals
        }
      }
    });
  
    //to work out the change/number of coins to be given as change
    //set up a variable to hold the new array
    var changeDue = [];
    
    //Check that there is enough change in the register
    if(change > totalCash){
      currentStatus = "INSUFFICIENT_FUNDS";
    }
    //if all change is returned close the register
    else if(change === totalCash){
      currentStatus = "CLOSED";
      // loop over the coins to return the cash in drawer
      for(var cs = 0; cs<coins.length; cs++){
        var name = coins[cs].name;
        var value = coins[cs].value;
        changeDue.push([name, value/100]);
      }
      //reverse the object so that lowest denomination is first
      cash = changeDue.reverse();
      //and return the result
      return {status: currentStatus, change: cash};
    }
    //there is change...
    else{
      currentStatus = "OPEN";
    }
    
    //loop over the coins array of objects and check coin values against the change
    //needed.
    for(var j = 0; j<coins.length; j++){
      var name = coins[j].name;
      var value = coins[j].value;
      var denom = coins[j].denomination;
  
      //if change can be divided by the coins denomination and is greater than one coin
      //and the value of the coins is not 0 and change is not 0
      if(change/denom >=1 && value > denom && change !== 0){
        var coinNum = Math.floor(value/denom); //the number of coins there are
        var amount = Math.floor(change/denom); //the number of coins needed
        //if there are more coins than needed the actual value is the number of coins
        //multiplied by the coin denomination (e.g. 5 x 25p).
        if(coinNum > amount){
          amount = amount * denom;
        }
        else{ //else take the full value
          amount = coinNum * denom;
        }

        change = change - amount; //reduce the change by the value taken out
        amount = parseFloat(Number(amount/100).toFixed(2)); //decimalize the amount
        changeDue.push([name, amount]);  //add to array
      }
    }