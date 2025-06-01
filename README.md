Ping Pong Game
A classic Ping Pong game implemented in C++ with simple graphics and game mechanics.
Developed by Kshitij Kolekar.

📝 Project Overview
This project recreates the classic Ping Pong game using C++. It features basic game mechanics such as paddle movement, ball physics, scoring, and collision detection. The game is designed to be a fun demonstration of applying programming fundamentals to build an interactive graphical application.

The project aims to reinforce concepts like event handling, game loops, and real-time user interaction in a desktop environment.

🎯 Objectives
Implement a playable Ping Pong game from scratch

Practice 2D graphics programming and animation

Handle user input for paddle control

Implement collision detection between ball and paddles/walls

Maintain and display player scores dynamically

🧱 Features
Two-player mode with keyboard controls

Realistic ball movement with speed and direction changes on paddle hits

Score tracking displayed during gameplay

Responsive controls for paddle movement

Simple and clear graphical interface

🛠️ Technologies Used
C++ (C++11 or higher)

SFML (Simple and Fast Multimedia Library) for graphics, window management, and input handling

📦 Directory Structure
bash
Copy
Edit
Ping_Pong_Game/
├── .gitignore
├── Fonts/
│   └── Roboto-VariableFont_wdth,wght.ttf
├── openal32.dll
├── Ping_Pong_Game/
│   └── x64/
│       └── Debug/
│           ├── Ping_Pong_Game.exe.recipe
│           ├── Ping_Pong_Game.ilk
│           ├── Ping_Pong_Game.log
│           ├── Ping_Pong_Game.obj
│           ├── ping_pong_game.obj.enc
│           ├── Ping_Pong_Game.tlog/
│           │   ├── CL.command.1.tlog
│           │   ├── Cl.items.tlog
│           │   ├── CL.read.1.tlog
│           │   ├── CL.write.1.tlog
│           │   ├── link.command.1.tlog
│           │   ├── link.read.1.tlog
│           │   ├── link.secondary.1.tlog
│           │   ├── link.write.1.tlog
│           │   └── Ping_Pong_Game.lastbuildstate
│           ├── vc143.idb
│           └── vc143.pdb
├── Ping_Pong_Game.cpp
├── Ping_Pong_Game.sln
├── Ping_Pong_Game.vcxproj
├── Ping_Pong_Game.vcxproj.filters
├── Ping_Pong_Game.vcxproj.user
├── SFML/
│   ├── include/
│   │   └── SFML/
│   │       ├── Audio/
│   │       │   ├── AlResource.hpp
│   │       │   ├── Export.hpp
│   │       │   ├── InputSoundFile.hpp
│   │       │   ├── Listener.hpp
│   │       │   ├── Music.hpp
│   │       │   ├── OutputSoundFile.hpp
│   │       │   ├── Sound.hpp
│   │       │   ├── SoundBuffer.hpp
│   │       │   ├── SoundBufferRecorder.hpp
│   │       │   ├── SoundFileFactory.hpp
│   │       │   ├── SoundFileFactory.inl
│   │       │   ├── SoundFileReader.hpp
│   │       │   ├── SoundFileWriter.hpp
│   │       │   ├── SoundRecorder.hpp
│   │       │   ├── SoundSource.hpp
│   │       │   └── SoundStream.hpp
│   │       ├── Audio.hpp
│   │       ├── Config.hpp
│   │       ├── GpuPreference.hpp
│   │       ├── Graphics/
│   │       │   ├── BlendMode.hpp
│   │       │   ├── CircleShape.hpp
│   │       │   ├── Color.hpp
│   │       │   ├── ConvexShape.hpp
│   │       │   ├── Drawable.hpp
│   │       │   ├── Export.hpp
│   │       │   ├── Font.hpp
│   │       │   ├── Glsl.hpp
│   │       │   ├── Glsl.inl
│   │       │   ├── Glyph.hpp
│   │       │   ├── Image.hpp
│   │       │   ├── PrimitiveType.hpp
│   │       │   ├── Rect.hpp
│   │       │   ├── Rect.inl
│   │       │   ├── RectangleShape.hpp
│   │       │   ├── RenderStates.hpp
│   │       │   ├── RenderTarget.hpp
│   │       │   ├── RenderTexture.hpp
│   │       │   ├── RenderWindow.hpp
│   │       │   ├── Shader.hpp
│   │       │   ├── Shape.hpp
│   │       │   ├── Sprite.hpp
│   │       │   ├── Text.hpp
│   │       │   ├── Texture.hpp
│   │       │   ├── Transform.hpp
│   │       │   ├── Transformable.hpp
│   │       │   ├── Vertex.hpp
│   │       │   ├── VertexArray.hpp
│   │       │   ├── VertexBuffer.hpp
│   │       │   └── View.hpp
│   │       ├── Graphics.hpp
│   │       ├── Main.hpp
│   │       ├── Network/
│   │       │   ├── Export.hpp
│   │       │   ├── Ftp.hpp
│   │       │   ├── Http.hpp
│   │       │   ├── IpAddress.hpp
│   │       │   ├── Packet.hpp
│   │       │   ├── Socket.hpp
│   │       │   ├── SocketHandle.hpp
│   │       │   ├── SocketSelector.hpp
│   │       │   ├── TcpListener.hpp
│   │       │   ├── TcpSocket.hpp
│   │       │   └── UdpSocket.hpp
│   │       ├── Network.hpp
│   │       ├── OpenGL.hpp
│   │       ├── System/
│   │       │   ├── Clock.hpp
│   │       │   ├── Err.hpp
│   │       │   ├── Export.hpp
│   │       │   ├── FileInputStream.hpp
│   │       │   ├── InputStream.hpp
│   │       │   ├── Lock.hpp
│   │       │   ├── MemoryInputStream.hpp
│   │       │   ├── Mutex.hpp
│   │       │   ├── NativeActivity.hpp
│   │       │   ├── NonCopyable.hpp
│   │       │   ├── Sleep.hpp
│   │       │   ├── String.hpp
│   │       │   ├── String.inl
│   │       │   ├── Thread.hpp
│   │       │   ├── Thread.inl
│   │       │   ├── ThreadLocal.hpp
│   │       │   ├── ThreadLocalPtr.hpp
│   │       │   ├── ThreadLocalPtr.inl
│   │       │   ├── Time.hpp
│   │       │   ├── Utf.hpp
│   │       │   ├── Utf.inl
│   │       │   ├── Vector2.hpp
│   │       │   ├── Vector2.inl
│   │       │   ├── Vector3.hpp
│   │       │   └── Vector3.inl
│   │       ├── System.hpp
│   │       ├── Window/
│   │       │   ├── Clipboard.hpp
│   │       │   ├── Context.hpp
│   │       │   ├── ContextSettings.hpp
│   │       │   ├── Cursor.hpp
│   │       │   ├── Event.hpp
│   │       │   ├── Export.hpp
│   │       │   ├── GlResource.hpp
│   │       │   ├── Joystick.hpp
│   │       │   ├── Keyboard.hpp
│   │       │   ├── Mouse.hpp
│   │       │   ├── Sensor.hpp
│   │       │   ├── Touch.hpp
│   │       │   ├── VideoMode.hpp
│   │       │   ├── Vulkan.hpp
│   │       │   ├── Window.hpp
│   │       │   ├── WindowBase.hpp
│   │       │   ├── WindowHandle.hpp
│   │       │   └── WindowStyle.hpp
│   │       └── Window.hpp
│   └── lib/
│       ├── cmake/
│       │   └── SFML/
│       │       ├── SFMLConfig.cmake
│       │       ├── SFMLConfigDependencies.cmake
│       │       ├── SFMLConfigVersion.cmake
│       │       ├── SFMLSharedTargets-debug.cmake
│       │       ├── SFMLSharedTargets-release.cmake
│       │       ├── SFMLSharedTargets.cmake
│       │       ├── SFMLStaticTargets-debug.cmake
│       │       ├── SFMLStaticTargets-release.cmake
│       │       └── SFMLStaticTargets.cmake
│       ├── Debug/
│       │   ├── sfml-audio-s-d.pdb
│       │   ├── sfml-audio-s.pdb
│       │   ├── sfml-audio.pdb
│       │   ├── sfml-graphics-s-d.pdb
│       │   ├── sfml-graphics-s.pdb
│       │   ├── sfml-graphics.pdb
│       │   ├── sfml-main-d.pdb
│       │   ├── sfml-main-s.pdb
│       │   ├── sfml-network-s-d.pdb
│       │   ├── sfml-network-s.pdb
│       │   ├── sfml-network.pdb
│       │   ├── sfml-system-s-d.pdb
│       │   ├── sfml-system-s.pdb
│       │   ├── sfml-system.pdb
│       │   ├── sfml-window-s-d.pdb
│       │   ├── sfml-window-s.pdb
│       │   └── sfml-window.pdb
│       ├── flac.lib
│       ├── freetype.lib
│       ├── ogg.lib
│       ├── openal32.lib
│       ├── sfml-audio-d.lib
│       ├── sfml-audio-s-d.lib
│       ├── sfml-audio-s.lib
│       ├── sfml-audio.lib
│       ├── sfml-graphics-d.lib
│       ├── sfml-graphics-s-d.lib
│       ├── sfml-graphics-s.lib
│       ├── sfml-graphics.lib
│       ├── sfml-main-d.lib
│       ├── sfml-main.lib
│       ├── sfml-network-d.lib
│       ├── sfml-network-s-d.lib
│       ├── sfml-network-s.lib
│       ├── sfml-network.lib
│       ├── sfml-system-d.lib
│       ├── sfml-system-s-d.lib
│       ├── sfml-system-s.lib
│       ├── sfml-system.lib
│       ├── sfml-window-d.lib
│       ├── sfml-window-s-d.lib
│       ├── sfml-window-s.lib
│       ├── sfml-window.lib
│       ├── vorbis.lib
│       ├── vorbisenc.lib
│       └── vorbisfile.lib
├── sfml-audio-2.dll
├── sfml-audio-d-2.dll
├── sfml-graphics-2.dll
├── sfml-graphics-d-2.dll
├── sfml-network-2.dll
├── sfml-network-d-2.dll
├── sfml-system-2.dll
├── sfml-system-d-2.dll
├── sfml-window-2.dll
├── sfml-window-d-2.dll
└── x64/
    └── Debug/
        ├── Ping_Pong_Game.exe
        └── Ping_Pong_Game.pdb

🚀 Getting Started
Prerequisites
C++ compiler (GCC / G++ or MSVC) supporting C++11 or later

SFML library installed on your system

Installation of SFML (Linux example)
bash
Copy
Edit
sudo apt-get install libsfml-dev
For Windows/macOS, please refer to the official SFML installation guide.

Compilation
If using the provided Makefile:

bash
Copy
Edit
make
Alternatively, compile manually:

bash
Copy
Edit
g++ src/*.cpp -o PingPong -lsfml-graphics -lsfml-window -lsfml-system
Running the Game
bash
Copy
Edit
./PingPong
🎮 Controls
Player 1 (Left Paddle):

Move Up: W

Move Down: S

Player 2 (Right Paddle):

Move Up: Up Arrow

Move Down: Down Arrow

📈 Potential Enhancements
Add AI opponent for single-player mode

Implement sound effects and background music

Add start menu and pause functionality

Enhance graphics and animations

Add difficulty levels and power-ups

👤 Author
Kshitij Kolekar
Passionate C++ developer focused on game development and multimedia programming.

📃 License

This project is not currently licensed.  
Feel free to explore the code, but please don’t reuse or distribute it without permission.
