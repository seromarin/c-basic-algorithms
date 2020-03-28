class client {

    constructor(Name = '', Id = '', Credit = 0, Address = '') {
        this.Name = Name;
        this.Id = Id;
        this.Credit = Credit;
        this.Address = Address;
    }

}

const client1 = new client();

client1.Name = "Sebastia Rodriguez"
client1.Id = "000000001"
client1.Credit = 1_000_000
client1.Address = "Cll 123 # 45 - 67"

console.log(`The cliente name is: ${client1.Name}`);
console.log(`The cliente id is: ${client1.Id}`);
console.log(`The cliente credit is: ${client1.Credit}`);
console.log(`The cliente address is: ${client1.Address}`);