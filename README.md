[![|Solid](https://fini.dev/img/logo.png)](https://site.fini.dev/)
# **Fini-Modified-GUI**

## **Requirements**
 - A copy of Fini's Anti-Hack & Admin Tools is required. (https://site.fini.dev/)

## **Installation**
  1. Download the contents of the repo provided in the releases section.
  2. Place the "AH" folder into a "dialog" folder if you have one, if you don't you can make one or you can change the directories within the script and dialog files to fit your needs. (The directory should be "AltisLife.Altis\dialog\AH\")
  3. Include the dialog in your description.ext
  
      ```
      #include "dialog\AH\AH_Controls.hpp"
      #include "dialog\AH\AH_Dialog.hpp"
      ```
  4. Place the ```dialogAH``` class into your own CfgFunctions file. (Example below of where it should be on Altis Life)
  
      ```
      class CfgFunctions {
          class Life_Client_Core {
              tag = "life";

              class dialogAH {
                  file = "dialog\AH";
                  class AHMenu {postInit = 1;};
              };
          };
      };
      ```
 
## **Additional Information**
 - If for whatever reason you don't have a notification system or want to use the one bundled in the scripts file, you can change your notification method within the fini cloud config with the following.
 ```
 [(_this select 0)] call AH_AM_Notification;
 ```
      
## **Support**
  - If you require support with anything in this repo specifically please contact me on discord (gaming#2892).
  
## **Images**
  
  [![|Solid](https://github.com/GamingOnline/Fini-Modified-GUI/blob/master/images/jc7Nex8ca1.png)](https://github.com/GamingOnline/Fini-Modified-GUI)
  [![|Solid](https://github.com/GamingOnline/Fini-Modified-GUI/blob/master/images/cKko48wmz0.png)](https://github.com/GamingOnline/Fini-Modified-GUI)
  [![|Solid](https://github.com/GamingOnline/Fini-Modified-GUI/blob/master/images/e1gbqe5vCe.png)](https://github.com/GamingOnline/Fini-Modified-GUI)
