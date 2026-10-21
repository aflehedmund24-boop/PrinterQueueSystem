PrintFlow — Printer Queue Management System

1. Project Overview

PrintFlow is a responsive, browser-based printer queue management website developed to demonstrate the First In, First Out (FIFO) data structure. It simulates how print requests can be organized and processed in the order they are received.

The project provides a simple interface for adding documents to a queue, viewing pending requests, processing the next document, and monitoring queue activity.

Live Website: [https://aflehedmund24-boop.github.io/PrinterQueueSystem/]

GitHub Repository: [https://github.com/aflehedmund24-boop/PrinterQueueSystem]

2. Project Objectives

The objectives of this project are to:

- Demonstrate the FIFO queue data structure in a practical application.
- Show how print requests can be added and processed in order.
- Display the number of pending and processed documents.
- Provide a responsive and user-friendly interface.
- Demonstrate the use of HTML, CSS, and JavaScript in web development.

3. Technologies Used

- HTML5: Structures the website and its content.
- CSS3: Provides the layout, styling, colors, and responsive design.
- JavaScript: Implements queue operations, updates statistics, and records recent activity.
- GitHub: Hosts the source code and manages project versions.
- GitHub Pages: Publishes the website online.

4. System Features

1. Add Print Request: Allows a user to enter a document name and an optional submitter name.
2. View Print Queue: Displays pending documents in processing order.
3. Process Next Document: Removes the earliest pending document and increases the processed count.
4. Queue Statistics: Displays the number of waiting documents, the number processed during the current session, and the next position in line.
5. Clear Queue: Removes all pending documents without increasing the processed count.
6. Recent Activity: Displays recent queue actions.
7. Responsive Design: Adapts the interface to desktop and mobile screens.

5. FIFO Queue Principle

FIFO stands for First In, First Out. The first document added to the queue is the first document processed.

For example:

Operation| Queue
Add Assignment.pdf| Assignment.pdf
Add Report.docx| Assignment.pdf → Report.docx
Process next| Report.docx
Add Notes.pdf| Report.docx → Notes.pdf

This demonstrates that documents are processed in the order they are submitted.

6. How to Use the System

1. Open the published PrintFlow website.
2. Enter a document name in the document name field.
3. Optionally enter the submitter's name.
4. Click Add to queue.
5. Review the pending documents and their positions.
6. Click Process next to process the earliest request.
7. Review the updated statistics and recent activity.
8. Click Clear queue to remove all remaining pending requests when necessary.

7. How to Run the Project

The website can be accessed through its published GitHub Pages URL.

To run it locally:

1. Download or clone the project repository.
2. Locate "index.html".
3. Open "index.html" in a modern web browser.

No separate web server is required for the current standalone implementation.

8. Limitations

- The system is a simulation and does not connect to a physical printer.
- Queue entries, processed counts, and activity are held in browser memory and reset when the page is refreshed.
- The current version does not include user authentication, a database, or multi-user synchronization.

9. Conclusion

PrintFlow demonstrates how the FIFO queue data structure can be applied to a printer queue management scenario. It combines queue operations with a responsive user interface and real-time display updates.

The project provides a practical introduction to data structures, basic web programming, and version control using GitHub.

10. Future Improvements

Possible future enhancements include persistent data storage, user authentication, administrator controls, and integration with a real printing service.
