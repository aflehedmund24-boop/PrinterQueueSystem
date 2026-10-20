# Printer Queue Management System

A simple C++ console application that demonstrates how a queue data structure can manage documents waiting to be printed.

## How it works

The application follows the First In, First Out (FIFO) principle: the first document added to the queue is the first document processed.

## Features

- Add a document to the print queue
- View documents waiting in the queue
- Process the next document in the queue
- Handle an empty queue
- Exit the application

## Data structure

The program uses `std::queue<std::string>` from the C++ Standard Library.

- `push()` adds a document to the rear of the queue.
- `front()` reads the document at the front.
- `pop()` removes the front document.
- `empty()` checks whether the queue contains any documents.

## How to run

### Using Code::Blocks
1. Create or open a C++ Console Application.
2. Replace the contents of `main.cpp` with this project's `main.cpp`.
3. Build and run the project (F9).

### Using a C++ compiler
From this folder, run:

```bash
g++ main.cpp -o PrinterQueueSystem
```

Then run the resulting executable. On Windows, use `PrinterQueueSystem.exe`.

## Note

This is an educational simulation of printer queue management. It does not connect to or control a physical printer.
