
<!DOCTYPE html>
<html lang="en">
    <head>
        <title>SortTasks</title>
    </head>
    <body>
        <header>
					<nav>
        <h1>Template: SortTasks</h1>
						<ul>
							<li>Home</li>
							<li>About</li>
							<li>Contact</li>
						</ul>
					</nav>
        </header>
        
        <section>
					
					<table>
						<caption>Hello Tablle</caption>
						<thead>
							<tr>
								<th scope="col">Name</th>
								<th scope="col">Content</th>
                                <th scope="col">Description</th>
                                <th scope="col">Reference id</th>
                                <th scope="col">Reference url</th>
							</tr>
						</thead>
						<thead>
							<tr>
								<th scope="row">Tesat1</th>
								<td>teste</td>
                                <td>teste</td>
                                <td>teste</td>
                                <td>teste</td>  
							</tr>
							<tr>
							<th scope="row">Tesat2</th>
							<td>gettou</td>
                                <td>gettou</td>
                                <td>gettou</td>
                                <td>gettou</td>
							</tr>
						</thead>
						<tbody>
                            
							
                        </tbody>
					</table>
            <h2 id="SortTasks">SortTasks</h2>
        <form name="priority-level">
            <h3 id="priority">Priority Level</h3>
            <label for="priority">
                <input type="checkbox" id="priority" name="low">
                Low
            </label>
            <label for="priority">
                <input type="checkbox" id="priority" name="medium">
                Medium
            </label>
            <label for="priority">
                <input type="checkbox" id="priority" name="high">
                High
            </label>  
           <label for="priority">
                <input type="checkbox" id="priority" name="urgent">
                Urgent 
            </label>
            
            <hr>
            
            <h3 id="timing">Estimated Time</h3>
            <label for="hours">
                <input type="text" id="hours" name="hours">
                Hour(s)
                             </label>
            <label for="minutes">
                <div class="center" style="width: auto; margin-left: auto; margin-right: auto;"><b>OR</b></div>
                <input type="text" id="minutes" name="min">
                Minutes
            </label>
            
            <hr>
            
            <h3 id="branch"> Related to</h3>
            <label for="category">
                <select id="category" name="work">
                    <option name="work" value="social">
                    Work
                    </option>
                    <option name="personal" value="personal">
                        Personal
                    </option>
                    <option name="knowledge" value="knowledge">
                        Knowledge
                    </option>
                    <option name="social" value="social">
                        Personal
                    </option>
                    <option name=" administration" value="administration">
                        Administration
                    </option>
                    <option name="finances" value="finances">
                        Finances
                    </option>
                </select>
            </label>
            
                    <hr>
                    
            <h3>Notes</h3>
            
                 
            <table>
                <figure>
                    <figcaption>GreenTEE</figcaption>
                <img src="https://lh3.googleusercontent.com/RRtHlfubiJ8Ay6jpMcRa_ahcmF9ROhqVJO3l3sdp5dK9RlRmosLR0zj7xAU71w6m5w4Zdupv6nodKLsCVWEfUEujiX_iSNgg0njwzfbIf3pN-gEtjTXr8oxn3imBcr4mQwhCxNsxo_wEVJxC9pB29Npwax4N9kzBhcpDKXjX8HGLQAdd_lplOylhTPLAszetaV53k4a2-WT8mHbJwBrB9QmALHu-6bXYpPhg-qJX61y4PJoJ10u7r_Bf-wj4guuopLFLgckgkK7kzDAj57Tzymw2sf0t8S0Mqsn73e-JLBRT6RY33bzrT3dFnkBfCrQdmNWAMHBrPS5qKQr1JDAv1cOweHvDvx8_Ljxh2V9A-591hxxhMW1u8bnPj0zopDhfYfxKEiuAoytybn_F4ZY0s9CuDj3VTcpxlRghnVA8dlbqnCoIENjOWKAUx-plWYDeschCzzVllz8RrG6-S58TSR5NQYXedqt2eTIxHsqrpkzJWMGOzbPJ0GaTFR1EJQ0VL2OEWMLAqhImXVwAeIY1HpPVwNgiHmY6gmNnvHUyuBsVzpqJ_6K-mAV-Syo1WsmtsH-Ke8LaK7NrKqMS7v_YLelcvZ-Yu22hlxdnzEZUYDMJvOgNDjbanftnULl43VjqZwV2lcAo_ki9uJHfTB7BdaqUFobJ7pYnpZAqRS9OLHl__naBE-oysrw0IRSepg=s939-no?authuser=0" width="200px">
     
                    </figure>
                <thead>
                    <caption><u><b>TASK</b></u>
                    </caption>
                    <aside>
                    <label for="file">File progress:</label>

 <progress id="file" max="100" value="70"> 70% </progress>
                    <label for="file">File progress:</label>

 <progress id="file" max="100" value="70"> 70% </progress>
                    <label for="file">File progress:</label>

 <progress id="file" max="100" value="70"> 70% </progress>
                    </aside>
                     <label for="notes">
                      Notes:
                            <input type="text" id="notes" placeholder="Type text here">   
                      <textarea type="text" cols="10" rows="6"></textarea>
            </label>
                </thead>
            </table>
                   
            </form>
        </section>
        <section>
        </section>
    </body>
        </html>