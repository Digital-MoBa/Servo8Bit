See this code in action: https://www.youtube.com/watch?v=UvY2BeQav8k

attach() – Attach the Servo variable to a pin.
write() – Writes a value in degrees to the servo, controlling the shaft accordingly.
writeMicroseconds() – Writes a value in microseconds to the servo, controlling the shaft accordingly
read() – Read the current angle of the servo (the value passed to the last call to write()).
attached() – Check whether the Servo variable is attached to a pin.
detach() – Detach the Servo variable from its pin.


Attention:
 - Works only on the ATtiny45 and the ATtiny85. 
 - Supports only 5 servo.
 - Supports only one clock frequencies: 1MHz, 8MHz, 16MHz.
 - Supports only pins on Port B. Which is only port available on the ATtiny45/85.
 - Uses timer1 by default on ATtiny45/85


Version History
---------------
1.0
- Bug fix on timer1 implementation
- Add 8 Bit timer2 for Arduino UNO support

0.7
-Bug fix: If detach() was called on a servo then subsequent calls to attach() would fail.
The detach() function now works properly.


0.6
-Added ability to easily select if this driver should use timer0 or timer1.
-Timer1 is now the default timer used. Used to be timer0.
-Made the timer init happen later to allow this driver to work when used with an attiny arduino library.
-Fixed bug where a 512 microsecond pulse would not be generated.

    
0.5 
-Initial public release



Short Guide On How To Compile
------------------------------
1) Make sure you have WinAvr installed (http://winavr.sourceforge.net/)
2) open a CMD window and navigate to the Servo8Bit folder
3) type in "make" in the CMD window and the code will be compiled
4) type in "make program" to program your Attiny. This assumes you are using a
   usb programmer (such as the AVRISP mkII).
