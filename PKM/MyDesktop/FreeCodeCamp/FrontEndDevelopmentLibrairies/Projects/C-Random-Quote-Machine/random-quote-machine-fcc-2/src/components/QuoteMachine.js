import React from 'react';
import Typography from '@material-ui/core/Typography';
import Card from '@material-ui/core/Card';
import CardContent from '@material-ui/core/CardContent';
import CardActions from '@material-ui/core/CardActions';
import Button from '@material-ui/core/Button';

const QuoteMachine = (props) => (
  <Card>
    <CardContent>
    {
        props.selectedQuote ?
        (
            <Typography>
            {props.selectedQuote.quote} - {props.selectedQuote.author}
            </Typography>
        ) : null
    }
    </CardContent>
    <CardActions>
    <Button size="small" onClick={props.assignNewQuoteIndex} >NEW QUOTE</Button>
    </CardActions>
  </Card>
);

export default QuoteMachine