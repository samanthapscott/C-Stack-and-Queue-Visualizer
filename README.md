# Stack and Queue Visualizer

A desktop GUI application built in C++ using wxWidgets that provides a real-time, interactive visualization of two fundamental data structures: the Stack (LIFO) and the Queue (FIFO).

Developed as a final project for C++ Programming, Fall 2025.

---

## Overview

This application allows users to perform core data structure operations through a simple graphical interface and observe the results instantly in a live display. The goal is to make abstract concepts like push/pop and enqueue/dequeue tangible and easy to understand.

The application is organized into two tabs, one for each data structure.

---

## Features

### Stack (LIFO - Last In First Out)
- **Push** - Enter any integer and add it to the top of the stack
- **Pop** - Remove the most recently added element from the top
- Live list display that always shows the top of the stack first
- Error handling for empty stack pop attempts and invalid input

### Queue (FIFO - First In First Out)
- **Enqueue** - Enter any integer and add it to the back of the queue
- **Dequeue** - Remove the element at the front of the queue
- Live list display that shows elements in order from front to back
- Error handling for empty queue dequeue attempts and invalid input

---

## Implementation Details

| Data Structure | Underlying Container | Reason |
|---|---|---|
| Stack | `std::vector<int>` | `push_back` / `pop_back` naturally model LIFO behavior; easy to iterate for display |
| Queue | `std::deque<int>` | `push_back` / `pop_front` naturally model FIFO behavior; efficient front removal |

---

## Requirements

- **Compiler:** MinGW-w64 (GCC) or any C++11-compatible compiler
- **GUI Framework:** [wxWidgets](https://www.wxwidgets.org/) (version 3.x)
- **IDE:** [Code::Blocks](https://www.codeblocks.org/) (project file included)
- **OS:** Windows (Linux also supported with a wxWidgets Linux build)

---

## Building the Project

1. Install [Code::Blocks](https://www.codeblocks.org/downloads/) with the MinGW compiler bundle.
2. Install [wxWidgets](https://www.wxwidgets.org/downloads/) and ensure it is configured with Code::Blocks.
3. Clone this repository:
   ```
   git clone https://github.com/samanthapscott/C-Stack-and-Queue-Visualizer.git
   ```
4. Open `StackandQueueVisualizer.cbp` in Code::Blocks.
5. Select **Build > Build and Run** (F9).

---

## Project Structure

```
StackandQueueVisualizer/
├── StackandQueueVisualizer.cbp       # Code::Blocks project file
├── StackandQueueVisualizerApp.cpp    # Application entry point (wxWidgets app class)
├── StackandQueueVisualizerApp.h
├── StackandQueueVisualizerMain.cpp   # Main frame: GUI construction, event handlers, logic
├── StackandQueueVisualizerMain.h     # Frame class declaration, data members
├── resource.rc                       # Windows resource file
├── wx_pch.h                          # Precompiled header for wxWidgets
└── wxsmith/
    └── StackandQueueVisualizerframe.wxs  # wxSmith layout descriptor
```

---

## Usage

1. Launch the application.
2. Use the **Stack** tab to practice LIFO operations:
   - Type an integer in the input field and click **Push** to add it.
   - Click **Pop** to remove the top element.
3. Use the **Queue** tab to practice FIFO operations:
   - Type an integer in the input field and click **Enqueue** to add it.
   - Click **Dequeue** to remove the front element.
4. The list display updates immediately after every operation.

---

## Author

**Samantha Scott**  
Florida International University  
C++ Programming, Fall 2025