function animal(arg){
return 'My ' +arg.color + ' '+ arg.species +' has ' +arg.legs +' legs.'

}

pet= new Object({species:"Dog", legs:4, color: "white"})
//console.log(pet.Species)
console.log(animal(pet))


