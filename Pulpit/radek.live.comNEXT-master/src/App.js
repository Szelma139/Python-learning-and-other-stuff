import React from 'react';
import './App.css';
import {
  BrowserRouter,
  Link,
  Route,
  Switch,
} from 'react-router-dom';

import NavigationBar from './Components/NavigationBar';
import Home from './Components/Home';
import CvComponent from './Components/CvComponent';
import SideBar from './Components/SideBar';
import NestedGrid from './Components/NestedGrid';
import Kontakt from './Components/Kontakt';

function App() {
  return (
    <>
    <BrowserRouter>
    <NavigationBar/>
    <div className="container">
   
     { /*
     <Button variant="primary">Button</Button>
     <Home/>
     <Department/>
     <Employee/>
     */}

     <h3 className="m-3 d-flex justify-content-center">
     </h3>
<Switch>
  <Route path='/' component={Home} exact />
  <Route path='/CvComponent' component={CvComponent} />
  <Route path='/kontakt' component={Kontakt} />
</Switch>
    </div>
    </BrowserRouter>
< NestedGrid/>
</>
  );
}

export default App;
