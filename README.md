# PrintFlow — Printer Queue Management Website

A responsive browser-based demonstration of a printer queue management system, built with HTML, CSS, and JavaScript.

## Features
- Add document names and optional submitter names
- View pending documents in FIFO order
- Process the next document
- View waiting and processed counts
- Clear the pending queue
- View recent activity
- Responsive layout for desktop and mobile

## Queue data structure
New requests are added to the end of a JavaScript array with `push()`. The next request is removed from the front with `shift()`. This demonstrates First In, First Out (FIFO).

## Run locally
Open `index.html` in any modern web browser. No installation is required.

## Publish using GitHub Pages
1. Upload `index.html` to the root of your GitHub repository.
2. Open **Settings → Pages**.
3. Under **Build and deployment**, select **Deploy from a branch**.
4. Choose the `main` branch and `/ (root)`, then save.
5. Wait for GitHub Pages to publish. The live URL will appear on the Pages settings screen.

## Note
This is an educational simulation. It does not connect to a physical printer, and queue data resets when the page is refreshed.
