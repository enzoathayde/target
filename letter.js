function letter(string) {
  words = string.split('')
  let appears = 0
  words.map((element => {
    if(element == 'a' || element == 'A') {
        appears++;
    }
  }))
  console.log(appears)
}

letter("A amiga da minha esposa.")