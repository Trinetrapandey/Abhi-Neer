// read file stream 
import fs from 'fs';
var readFile = fs.createReadStream("./data1.txt");
var content = "";
readFile.on("./data1.txt", (chunk) => {
    content += chunk;
});
console.log(content);
console.log("content");

