
/*  © Copyright CERN, 2015. All rights not expressly granted are reserved.
        
    The stub of this file was generated by Quasar (additional info: using transform designToDeviceBody.xslt) 
    on 2020-05-06T18:20:42.469+02:00
    
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

#include <DCommands.h>
#include <ASCommands.h>
#include <LogIt.h>




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
  DCommands::DCommands (const Configuration::Commands & config,
			Parent_DCommands * parent):Base_DCommands (config,
								   parent)
    /* fill up constructor initialization list here */
  {
    /* fill up constructor body here */
  }

  /* sample dtr */
  DCommands::~DCommands ()
  {
  }

  /* delegators for cachevariables and externalvariables */

  /* Note: never directly call this function. */

  UaStatus DCommands::writeReset (const OpcUa_Boolean & v)
  {
      if (v)
      {
    	  getParent()->ps->sendReset();
      }
      return OpcUa_Good;
  }

  UaStatus DCommands::writeClear (const OpcUa_Boolean & v)
  {
      if (v)
      {
    	  getParent()->ps->sendClear();
      }
      return OpcUa_Good;
  }

  /* Note: never directly call this function. */

  UaStatus DCommands::writeClearTrip (const OpcUa_Boolean & v)
  {
      if (v)
      {
    	  getParent()->ps->clearTrip();
      }
    return OpcUa_Good;
  }


  // 3333333333333333333333333333333333333333333333333333333333333333333333333
  // 3     FULLY CUSTOM CODE STARTS HERE                                     3
  // 3     Below you put bodies for custom methods defined for this class.   3
  // 3     You can do whatever you want, but please be decent.               3
  // 3333333333333333333333333333333333333333333333333333333333333333333333333

  void DCommands::restoreCommandsToFalse()
  {
	  OpcUa_Boolean reset;
	  OpcUa_Boolean clear;
	  OpcUa_Boolean clearTrip;
	  getAddressSpaceLink()->getReset(reset);
	  getAddressSpaceLink()->getClear(clear);
	  getAddressSpaceLink()->getClearTrip(clearTrip);
	  if (reset)
		  getAddressSpaceLink()->setReset(0, OpcUa_Good);
	  if (clear)
		  getAddressSpaceLink()->setClear(0, OpcUa_Good);
	  if (clearTrip)
		  getAddressSpaceLink()->setClearTrip(0, OpcUa_Good);
  }


}
