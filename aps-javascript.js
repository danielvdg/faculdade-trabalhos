
/**
Trabalho da Disciplina de Programação de JavaScript
Turma: 963N
Aluno:Daniel Alves de Moraes
Matrícula: 2024101092

*/

function ehPrimo(num) {
    let ehPrimo = true;
    
    if (num < 2) {
        ehPrimo = false;
    } else {
        for (let i = 2; i < num; i++) {
            if (num % i === 0) {
                ehPrimo = false;
                break;
            }
        }
    }

    if (ehPrimo === false) {
        return false
    } else {
        return true;
    }
}

function encontrDezMaioresPrimos(num) {
   
    if (isNaN(num)) {
        console.log("Por favor, insira um número válido.");
        return;
    }

    let primes = [];
    while (primes.length < 10 && num >= 2) {
        if (ehPrimo(num)) {
            primes.push(num);
        }
        num--;
        
    }
    if(primes.length == 10){
        console.log("Os 10 maiores números primos a partir do número fornecido são:");
        console.log(primes);
    }else {
        console.log("Não possui 10 primos digite um valor maior");
        console.log(primes);
    }
    
}

encontrDezMaioresPrimos(10);
