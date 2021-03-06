
/*  © Copyright CERN, 2015. All rights not expressly granted are reserved.
        
    The stub of this file was generated by Quasar (additional info: using transform designToDeviceBody.xslt) 
    on 2020-05-18T15:45:53.209+02:00
    
    Quasar is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public Licence as published by
    the Free Software Foundation, either version 3 of the Licence.
    Quasar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public Licence for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Quasar.  If not, see <http://www.gnu.org/licenses/>.
    
    
    
 */




#include <Configuration.hxx>

#include <DActual.h>
#include <ASActual.h>
#include <DChannel.h>
#include <ASChannel.h>





namespace Device
{




  // 1111111111111111111111111111111111111111111111111111111111111111111111111
  // 1     GENERATED CODE STARTS HERE AND FINISHES AT SECTION 2              1
  // 1     Users don't modify this code!!!!                                  1
  // 1     If you modify this code you may start a fire or a flood somewhere,1
  // 1     and some human being may possible cease to exist. You don't want  1
  // 1     to be charged with that!                                          1 
  // 1111111111111111111111111111111111111111111111111111111111111111111111111






  // 2222222222222222222222222222222222222222222222222222222222222222222222222
  // 2     SEMI CUSTOM CODE STARTS HERE AND FINISHES AT SECTION 3            2
  // 2     (code for which only stubs were generated automatically)          2
  // 2     You should add the implementation but dont alter the headers      2
  // 2     (apart from constructor, in which you should complete initializati2
  // 2     on list)                                                          2 
  // 2222222222222222222222222222222222222222222222222222222222222222222222222

  /* sample ctr */
  DActual::DActual (const Configuration::Actual & config,
		    Parent_DActual * parent):Base_DActual (config, parent)
    /* fill up constructor initialization list here */
  {
    /* fill up constructor body here */
  }

  /* sample dtr */
  DActual::~DActual ()
  {
  }

  /* delegators for cachevariables and externalvariables */


  // 3333333333333333333333333333333333333333333333333333333333333333333333333
  // 3     FULLY CUSTOM CODE STARTS HERE                                     3
  // 3     Below you put bodies for custom methods defined for this class.   3
  // 3     You can do whatever you want, but please be decent.               3
  // 3333333333333333333333333333333333333333333333333333333333333333333333333

  void DActual::update()
  {
	  float iMon = 0, vMon = 0;
	  bool isOn = 0, trip = 0;

	  //get the Channel-> get the powerSupply -> get its ps member -> exec command on member
	  getParent()->getParent()->ps->actualCurrent(iMon);
	  getParent()->getParent()->ps->actualVoltage(vMon);
	  getParent()->getParent()->ps->actualIson(isOn);
	  getParent()->getParent()->ps->actualTrip(trip);

	  getAddressSpaceLink()->setIMon(iMon, OpcUa_Good);
	  getAddressSpaceLink()->setVMon(vMon, OpcUa_Good);
	  getAddressSpaceLink()->setIsOn(isOn, OpcUa_Good);
	  getAddressSpaceLink()->setTrip(trip, OpcUa_Good);
  }



}
