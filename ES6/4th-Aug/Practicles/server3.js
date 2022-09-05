// Routing messages on different-different URL's 
import * as http from 'http';
http.createServer((req, res) => {
    res.write("<h1>Welcome to world of Node server</h1>");
    var msg;
    if (req.url == '/' || req.url == '/home') {
        res.write(req.url);
        res.write("<h1>This is home page </h1>");
    }
    else if (req.url == '/home/nav') {
        res.write("Path = " + req.url);
        res.write("<h1>This is home/nav page </h1>");
    }
    else if (req.url == '/about') {
        res.write("Path = " + req.url);
        res.write("<h1>This is about page </h1>");
    }

    else if (req.url == '/services') {
        res.write("Path = " + req.url);
        res.write("<h1>This is services page </h1>");
    }

    else if (req.url == '/contact') {
        res.write("Path = " + req.url);
        res.write("<h1>This is contact page </h1>");
    }
    res.end();
}).listen(8081);
console.log("Server invoked at link http://localhost:8081 ");
