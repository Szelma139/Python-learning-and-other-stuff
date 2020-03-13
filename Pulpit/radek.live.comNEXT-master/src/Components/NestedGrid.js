import React from 'react';
import { makeStyles } from '@material-ui/core/styles';
import Paper from '@material-ui/core/Paper';
import Grid from '@material-ui/core/Grid';
import Card from '@material-ui/core/Card';
import './Footer.css';

const useStyles = makeStyles(theme => ({
  root: {
    flexGrow: 1,
  },
  paper: {
    padding: theme.spacing(2),
    textAlign: 'center',
    color: theme.palette.text.secondary,
  }
  
}));

var style = {
  backgroundColor: "Silver",
  border: "5px solid navy",
  textAlign: "center",
  padding: "20px",
  position: "relative",
  left: "0",
  bottom: "0",
  height: "10%",
  width: "100%",
  paddingTop: "10vh",
  marginTop: "25vh",
  paddingBottom: "2vh"
};



export default function NestedGrid() {
  const classes = useStyles();


  return (
    <>
    <footer style={style } className="gradient">
    <div className={classes.root}>
      <Grid container spacing={6}> 
    
        <Grid item xs={3} style={{}}>
        
        <a style={{ textDecoration: 'none',color:'white', padding: '50px',fontSize: '1.5em' }} href="https://github.com/Szelma139">  Github  <i className="fa fa-github fa-5x"/></a>
 
        </Grid>
        <Grid item xs={3} >
     
       <a style={{ textDecoration: 'none', color:'white',padding: '50px',fontSize: '1.5em' }}>  Gmail <i className="fa fa-envelope-square fa-5x"/></a>
        </Grid>
        <Grid item xs={3}>
        <a href="https://szelma139.github.io/" style={{padding: '50px', textDecoration: 'none', color:'white',fontSize: '1.5em' }}>  Blog   <i className="fa fa-id-card-o fa-5x"/></a> 
        </Grid>
        <Grid item xs={3}>
        <a href= "https://www.facebook.com/profile.php?id=100006430616372" style={{padding: '50px', textDecoration: 'none', color:'white',fontSize: '1.5em' }}>  Facebook   <i className="fa fa-facebook fa-5x"/></a> 

        </Grid>
      </Grid>

      <Grid container spacing={6}>  
        <Grid item xs={12}>
</Grid>
</Grid>

    </div>
    </footer>
    </>
  );
}
