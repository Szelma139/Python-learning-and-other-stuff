import React, { Component } from 'react'
import AppBar from '@material-ui/core/AppBar';
import Toolbar from '@material-ui/core/Toolbar';
import Typography from '@material-ui/core/Typography';
import Button from '@material-ui/core/Button';
import IconButton from '@material-ui/core/IconButton';
import Fab from '@material-ui/core/Fab';
import {NavLink, Route} from 'react-router-dom';
import FavoriteBorderOutlinedIcon from '@material-ui/icons/FavoriteBorderOutlined';




export default class NavigationBar extends Component {
    render() {
        return (
          <>
         
          <AppBar position="static">
  <Toolbar>
    <IconButton edge="start" className="menuButton" color="inherit" aria-label="menu">
    </IconButton>
    <Typography variant="h6" className="title">
      RN
    </Typography>
    <NavLink style={{textDecoration:'none'}} className="d-inline p-2  text-white"
                    to="/">
                          <Button style={{marginLeft:"50px", color:'yellow'}} variant="outlined" color="secondary">Główna</Button>

                    </NavLink>


                    <NavLink style={{textDecoration:'none', color:'white'}} className="d-inline p-2 text-white"
                    to="/CvComponent">
   <Button color="inherit">Cv</Button>
                    </NavLink>
 

  


    <NavLink style={{textDecoration:'none', color:'white'}} className="d-inline p-2text-white"
                    to="/Kontakt">
  <Button color="inherit">Kontakt</Button>
                    </NavLink>
    <Fab disabled aria-label="like" style ={{marginLeft:"70%"}}>
      <FavoriteBorderOutlinedIcon style={{fill: "white"}}/>
</Fab>
  </Toolbar>
</AppBar>
</>
        )
    }
}
