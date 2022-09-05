//http module - code complexity reduce

import * as http from 'http';

http.createServer((req, res) => {
    res.write("<h1>Welcome to world of Node server</h1>");
    res.end();
}).listen(8081);
console.log("Server invoked at link http://localhost:8081");