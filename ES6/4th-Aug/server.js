//http module

import * as http from 'http';

http.createServer((request, response) => {
  response.write("<h1>Welcome to world of Node server</h1>");
  response.end();
}).listen(8081, (error) => {
  if (error)
    console.log(error);
  else
    console.log("Server invoked at link http://localhost:8081");
});


