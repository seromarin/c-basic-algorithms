"use strict";

const SIZE = 5, values = [];
let front = -1, rear = -1;

function enQueue(value) {
    
    if (rear === SIZE - 1) {
        console.log("Nuestro queue esta lleno!");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    values[rear] = value;

    console.log(`Se inserto correctamente el valor ${value}`);

}

function deQueue() {

    if (front == -1) {
        console.log("Nuestro queue esta vacio!");
        return;
    }

    console.log(`Se elimino el valor ${values[front]}`);
    front++;
    if (front > rear) {
        front = rear = -1;
    }


}

enQueue(1);
enQueue(2);
enQueue(3);
enQueue(4);
enQueue(5);
deQueue();
deQueue();
deQueue();
deQueue();
deQueue();
enQueue(6);