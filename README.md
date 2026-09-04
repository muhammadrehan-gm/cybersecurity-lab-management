# Lab Management System
**student Name:** Muhammad Rehan\
**Student-ID:** 26k-2001
## Project Description
A C-based management prototype developed for a university cybersecurity laboratory to track and calculate infrastructure costs. And give the overall lab investment into a structured summary report.

## Input
Ask the user for:
+ Lab name
+ Number of computers
+ Number of network devices
+ Number of security tools
+ Cost per computer
+ Cost per network device
+ Annual security software cost

## Processing
**Calculate:**\
Computer Cost =
Number of Computers × Cost per Computer\
Network Cost =
Number of Network Devices × Cost per Device\
Total Lab Investment =
Computer Cost + Network Cost + Software Cost

## Output
The program displays a structured report titled `CYBERSECURITY LAB REPORT` 
* The lab name, total number of computers, network devices, and security tools
* Computed total computer cost, total network device cost, and annual security software cost
* The final calculated total lab investment

## How to Compile
Open a terminal in the project directory and run the GCC compiler:

```bash
gcc cyber_lab.c -o cyber_lab

