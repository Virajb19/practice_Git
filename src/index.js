const fs = require('fs')

const filePath = '~/Desktop/Practice/Git/hello.txt'

fs.readFile(filePath,'utf-8',function(err,data){
    if(err) console.error(err)
    else console.log(data)
})