import React, { Component } from 'react'
import { makeStyles } from '@material-ui/core/styles';
import Grid from '@material-ui/core/Grid';
import MyCard from './myCard';
import JavaIcon from './Icons/java.svg';
import Background from './Images/background.jpg';
import Background1 from './Images/background1.jpg';
import CppIcon from './cpp.png';
import Alert from 'react-bootstrap/Alert'
import ReactIcon from './Icons/react.svg';
import SqlIcon from './Icons/sql.png';
import NetIcon from './Icons/dotnet.svg';
import QtIcon from './Icons/Qt.svg';
import LinuxIcon from './Icons/Linux.svg';
import MaterialIcon from './Icons/material.png';
import JavascriptIcon from './Icons/javascript.png';
import Avatar from './Images/avatar.png'




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
  backgroundColor: "white",
  borderTop: "1px solid #E7E7E7",
  textAlign: "center",
  padding: "20px",
  position: "relative",
  left: "0",
  bottom: "0",
  height: "10%",
  width: "100%",
  paddingTop: "30vh",
};

var background1style = {
linearGradient: '126,213,111,0.8'

};



export default function Home() {
  const classes = useStyles();
  let java = require('./Icons/java.svg');

  

  return (
    <>
    

     <Alert variant="warning" style={{fontSize:'1.5em'}}>
          <Alert variant="warning" style={{width:'60%', float: 'left  '}}>
  <Alert.Heading>Witaj!</Alert.Heading>

  <p>
    Jeśli w moim życiu pojawiły się ostatnio jakieś duże zmiany, dowiedziałem się czegoś ciekawego i chcę się z tym podzielić pod spodem
    zobaczysz o tym informację. 

  </p>
  <hr />
  <p className="mb-0">
  Zaglądnij też na mój blog tutaj:   </p>

  <Alert.Link href="https://szelma139.github.io/">Tutaj</Alert.Link>. No dalej kliknij go!
  </Alert>
     
  <div style = {{  borderRadius:'10px',borderCollapse: 'collapsed'}}>

<img style={{width:'40%', height:'40%'}} src={Avatar} alt="Blog link" href="https://szelma139.github.io/"/>
</div>
</Alert>

<Grid container spacing ={6}>
  <Grid item xs={12}>
    <h3>Kilka słów o mnie:</h3>
    <p>Mam na imię Radek. Ukończyłem studia na Politechnice Rzeszowskiej jak magister inżynier ze specjalności sieci i systemy komputerowe, posiadam dużą wiedzę z tego obszaru. Jednak
zajmuje się również programowaniem, dzięki zbieżnościom losu i dużej upartości a może równiez tego że jestem trochę samoukiem. 
    </p>
  </Grid>
</Grid>
<div className="container">
  
    <div>
      <Grid container spacing={6}>  

        <Grid item xs={4} >
        <MyCard name={'c++'} path={CppIcon} tekst={'Konstrukcja programów desktopowych'}/>

             </Grid>
        <Grid item xs={4}>
        <MyCard name={'Java'} path={JavaIcon} tekst={'JavaFx i Swing'}/>

        </Grid>
        <Grid item xs={4} >
        <MyCard name={'C#'} path={NetIcon} tekst={'Platfroma .NET'}/>

        </Grid>
      </Grid>

      <Grid container spacing={6}>  
        <Grid item xs={12}>
          Głównie zajmuje się pisaniem programów w C++ (QT) oraz działaniem w obszarze React/React Native/Next.js, natomiast na tej stronie pokazuje wszystkie technologie z którymi miałem dłuższą styczność, jednak nie w tak zaawansowanym stopniu jak C++.
</Grid>
</Grid>


<Grid container spacing={6}>  
  
  <Grid item xs={4} >
  <MyCard name={'SQL'} path={SqlIcon} tekst={'SELECT, JOIN .. FROM'}/>

       </Grid>
  <Grid item xs={4}>
  <MyCard name={'QT'} path={QtIcon} tekst={'Qt Framework'}/>

  </Grid>
  <Grid item xs={4}>
  <MyCard name={'Linux'} path={LinuxIcon} tekst={'Nie tylko ubuntu!'}/>

  </Grid>
</Grid>

<Grid container spacing={6}>  
  
  <Grid item xs={4} >
  <MyCard name={'React'} path={ReactIcon} tekst={'Konstrukcja aplikacji webowych/natywnych'}/>

       </Grid>
  <Grid item xs={4}>
  <MyCard name={'Javascript'} path={JavascriptIcon} tekst={'Aplikacje klienckie oraz backendowe'}/>

  </Grid>
  <Grid item xs={4}>
  <MyCard name={'Material-UI'} path={MaterialIcon} tekst={'Budowa interfejsów frontendowych'}/>

  </Grid>
</Grid>


<Grid container spacing={6}>
  <Grid item xs={12}>
    <p>Miałem również styczność z oprogramowaniem serwerowym na linxie, klientami VNC/RDP, zdalnymi pulpitami oraz oczywiście dokumentacją techniczną oraz automatyzacją pracy przy użyciu skryptów w pythonie.</p> 
<p>Polecam również przyjrzeć się kilku programom z mojego Githuba. Pod spodem kilka linków do kontaktu ze mną.</p>
</Grid>
</Grid> 
    </div>
    </div>
    </>
    
        )
    }

