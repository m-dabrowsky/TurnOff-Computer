# Simple TurnOff Computer App on Windows!

Hi! This is a project for a Windows shutdown application. The application was created because I needed something simple, nice looking and doing the job.
### Inspiration
This app is based on a similar Polish App called [**TurnOff App**](https://www.dobreprogramy.pl/turn-off-app,program,windows,6628443308762753).
I liked the look of this app so I decided to do something similar.

# Installation

Unfortunately, at the moment, Visual Studio does not allow me to create an installation version. If I manage to fix the problem, the repository will be updated with the installation files.


# How it works

As you can see in the screenshots, the application has a fairly simple window. The image with **three dots** allows you to choose between <u>two options<u>:
- turning off the computer at a specific time
- computer shutdown after a specified time
<p align="center">
  <img src="./img/example.png" width="738">
</p>

**To return to the main window**, press the button with dots again.

The hour and minutes are **set using the arrows** above and below them.
<p align="center">
  <img src="./img/example.png" width="738">
</p>

Pressing the start button will start the countdown (as shown in the gif image).
After the counter reaches zero (hours and minutes), the computer is turned off with:
```c++
 system("C:\\Windows\\System32\\shutdown /s");
   ```

However, for testing purposes, the following window appears:

<p align="center">
  <img src="./img/example.png" width="738">
</p>
