import React, { Component } from 'react'
import Paper from '@material-ui/core/Paper';
import Grid from '@material-ui/core/Grid';
import Card from '@material-ui/core/Card';
import CardContent from '@material-ui/core/CardContent';
import Typography from '@material-ui/core/Typography';

export default class MyCard extends Component {
    render() {
        return (
            <div>
                <Paper elevation={0} />

                <Card >
        <CardContent>
        <Typography color="textSecondary" gutterBottom>
        </Typography>
        <Typography variant="h5" component="h2" style={{textAlign:'center'}}>
        <img style={{height:'100px', width:'100px'}} src={this.props.path}   alt={this.props.name} />
        </Typography>
        <Typography  color="textSecondary" style={{textAlign:'center'}}>
       {this.props.name}
        </Typography>
        <Typography variant="body2" component="p" style={{textAlign:'center'}}>
       {this.props.tekst}
        </Typography>
      </CardContent>
    </Card>
    <Paper />
            </div>
        )
    }
}
