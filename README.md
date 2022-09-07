# Passwords-from-Chernobyl



![PFC Graphic(1)](https://user-images.githubusercontent.com/110936578/187055151-b25f3611-3a54-49df-86e3-8f2b5db705db.png)











Truly Random Passwords from Radioisotopes

Welcome to PFC! We have a solution to boring PRNG password generation. With our Arduino-based device, you can generate random passwords with just a few clicks. Simply build the device with the below parts list(3D Files included!) and get the Arduino code from here. Once you are finished building(and hopefully cable-managing those jumper wires!), install our web extention and connect your generator to your computer via USB. Follow the website manual below to generate your random passwords. 

You can also turn this thing into a geiger counter quite easily!!


## Parts List

* [Arduino Mega 2560](https://www.microcenter.com/product/486545/inland-mega-2560-mainboard-arduino-compatible)
* [Geekcreit Assembled Geiger-Mueller Circuit](https://usa.banggood.com/Geekcreit-Assembled-Geiger-Counter-Module-Miller-Tube-GM-Tube-Nuclear-Radiation-Geekcreit-for-Arduino-products-that-work-with-official-Arduino-boards-p-1136883.html?cur_warehouse=CN&rmmds=search) 

* [waveshare 1.5inch RGB OLED Display Module](https://www.amazon.com/waveshare-1-5inch-RGB-OLED-Module/dp/B07DBXMFSN/ref=sr_1_1_sspa?crid=1F0T07SKPBZKP&keywords=waveshare+1.5+inch+rgb+oled&qid=1661658070&sprefix=waveshare+1.5+inch+rgb+oled%2Caps%2C113&sr=8-1-spons&psc=1&smid=A2SA28G0M1VPHD&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEzSExJS1RIMFFVVEFXJmVuY3J5cHRlZElkPUEwNTQ5NTE0M05TTDZCOFlEOVQ1SyZlbmNyeXB0ZWRBZElkPUEwMjg5Mzg4QUhEVkpJTldTMjNaJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)
* Generic USB-A to USB-B Cable
* [Male-to-Female Jumper Wires](https://www.amazon.com/ZYAMY-120PCS-Connector-Multicolor-Breadboard/dp/B0742RS6YL/ref=sr_1_4?crid=WE2LDMGJ7HDB&keywords=arduino+jumper+wires+5cm&qid=1661658905&sprefix=arduino+jumper+wires+5cm%2Caps%2C81&sr=8-4) _No need to buy this much, only need 3 cables. For connecting Arduino to Geiger board._
* [Break Away Headers, Straight, 10 pack](https://www.microcenter.com/product/427701/break-away-headers,-straight,-10-pack) _No need to buy this much, only need 7 pins. For connecting OLED display to Arduino._

## Instructions for Assembly

![gmtubeinstruction](https://user-images.githubusercontent.com/110936578/187056831-1e299ee1-b470-4fbd-bc64-a0f15b654007.JPG)


1. Unbox the geiger board and install the included GM tube by placing it in the metal holders.(you may need to bend them back a little. ). Make sure it is in the proper orientation of charges(like a battery). Should be labeled on the tube and board. Careful- tube is fragile.



![gmtubeinstructionp2](https://user-images.githubusercontent.com/110936578/187056915-85ee2913-80c1-4b68-8339-2c4294abbc83.JPG)




2. Attach the included plastic shield using the included standoffs.

3. 
