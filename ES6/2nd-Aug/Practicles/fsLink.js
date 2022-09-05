import { unlink } from 'fs';
import { link } from 'fs';
// unlink('./data2.txt', (err) => {
//     console.log(err);
//     console.log('./Abhi-Neer/data2.txt was deleted');
// });

link("./ES6/2nd-Aug/Practicles/fsLink.js", './data3.txt', (err) => {
    console.log(err);
    console.log('./Abhi-Neer/data2.txt was deleted');
});

