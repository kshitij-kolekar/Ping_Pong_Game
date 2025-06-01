# Ping Pong Game

A classic Ping Pong game implemented in C++ with simple graphics and game mechanics. Developed by **Kshitij Kolekar**.

---

## 📝 Project Overview

This project recreates the classic Ping Pong game using C++. It features basic game mechanics such as paddle movement, ball physics, scoring, and collision detection. The game serves as a fun demonstration of applying programming fundamentals to build an interactive graphical application.

The project aims to reinforce concepts like event handling, game loops, and real-time user interaction in a desktop environment.

---

## 🎯 Objectives

- Implement a playable Ping Pong game from scratch  
- Practice 2D graphics programming and animation  
- Handle user input for paddle control  
- Implement collision detection between ball and paddles/walls  
- Maintain and display player scores dynamically  

---

## 🧱 Features

- Two-player mode with keyboard controls  
- Realistic ball movement with speed and direction changes on paddle hits  
- Score tracking displayed during gameplay  
- Responsive controls for paddle movement  
- Simple and clear graphical interface  

---

## 🛠️ Technologies Used

- C++ (C++11 or higher)  
- SFML (Simple and Fast Multimedia Library) for graphics, window management, and input handling  

---

## 📦 Directory Structure

Ping\_Pong\_Game/
├── .gitignore
├── Fonts/
│   └── Roboto-VariableFont\_wdth,wght.ttf
├── openal32.dll
├── Ping\_Pong\_Game/
│   └── x64/
│       └── Debug/
│           ├── Ping\_Pong\_Game.exe.recipe
│           ├── Ping\_Pong\_Game.ilk
│           ├── Ping\_Pong\_Game.log
│           ├── Ping\_Pong\_Game.obj
│           ├── ping\_pong\_game.obj.enc
│           ├── Ping\_Pong\_Game.tlog/
│           │   ├── CL.command.1.tlog
│           │   ├── Cl.items.tlog
│           │   ├── CL.read.1.tlog
│           │   ├── CL.write.1.tlog
│           │   ├── link.command.1.tlog
│           │   ├── link.read.1.tlog
│           │   ├── link.secondary.1.tlog
│           │   ├── link.write.1.tlog
│           │   └── Ping\_Pong\_Game.lastbuildstate
│           ├── vc143.idb
│           └── vc143.pdb
├── Ping\_Pong\_Game.cpp
├── Ping\_Pong\_Game.sln
├── Ping\_Pong\_Game.vcxproj
├── Ping\_Pong\_Game.vcxproj.filters
├── Ping\_Pong\_Game.vcxproj.user
├── SFML/
│   ├── include/
│   ├── lib/
│   ├── Debug/
│   ├── sfml-\*.dll
│   └── x64/
│       └── Debug/
│           ├── Ping\_Pong\_Game.exe
│           └── Ping\_Pong\_Game.pdb



---

## 🚀 Getting Started

### Prerequisites

- C++ compiler (GCC / G++ or MSVC) supporting C++11 or later  
- SFML library installed on your system  

### Installing SFML (Example for Linux)

```bash
sudo apt-get install libsfml-dev
```

For Windows/macOS, please refer to the [official SFML installation guide](https://www.sfml-dev.org/tutorials/2.5/).

---

## 💻 Compilation

If using the provided Makefile:

```bash
make
```

Alternatively, compile manually:

```bash
g++ src/*.cpp -o PingPong -lsfml-graphics -lsfml-window -lsfml-system
```

---

## ▶️ Running the Game

```bash
./PingPong
```

---

## 🎮 Controls

**Player 1 (Left Paddle):**

* Move Up: `W`
* Move Down: `S`

**Player 2 (Right Paddle):**

* Move Up: `Up Arrow`
* Move Down: `Down Arrow`

---

## 📈 Potential Enhancements

* Add AI opponent for single-player mode
* Implement sound effects and background music
* Add start menu and pause functionality
* Enhance graphics and animations
* Add difficulty levels and power-ups

---

## 👤 Author

Kshitij Kolekar
Passionate C++ developer focused on game development and multimedia programming.

---

## 📃 License

This project is not currently licensed.
Feel free to explore the code, but please don’t reuse or distribute it without permission.
