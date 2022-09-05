// Creating a server and sending a request and getting a response from server
import * as http from 'http';
var server = http.createServer((request, response) => {
    response.write("<h1>Server has responsed  Succesfully...</h1>");
    response.end();
});

server.listen(8081, (error) => {
    if (error) {
        console.log(error);
    }
    else {
        console.log("Server Responsded succesfull");
    }
});
