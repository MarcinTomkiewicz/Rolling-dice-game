const body = document.querySelector("body");
const btnRoll = document.querySelector("button");
const roundResultDiv = document.querySelector(".round__result");

let currentPoints = 100;
document.querySelector(".current__points").innerHTML = "Aktualny stan punktów to: " + currentPoints;
const gameState = {
    pending: "Oczekiwanie na rzut",
    win: "Wygrałeś, zyskujesz 10zł",
    lost: "Przegrywasz i tracisz 15zł",
    draw: "Gra nierozstrzygnięta"
}

let roundResult = "pending";

roundResultDiv.innerHTML = gameState[roundResult];

const rollADice = () => {
    const resultOfFirstRoll = Math.floor(Math.random() * 6) + 1;
    const resultOfSecondRoll = Math.floor(Math.random() * 6) + 1;
    const twoDices = resultOfFirstRoll + resultOfSecondRoll;
    return {
        resultOfFirstRoll,
        resultOfSecondRoll,
        twoDices,
    }
}

const updateState = (resultOfRoll) => {
    if (resultOfRoll.twoDices === 7 || resultOfRoll.twoDices === 11) {
        roundResult = "win";
        currentPoints += 10;
    } else if (resultOfRoll.twoDices === 2 || resultOfRoll.twoDices === 3 || resultOfRoll.twoDices === 12) {
        roundResult = "lost";
        currentPoints -= 15;
    } else {
        roundResult = "draw";
        currentPoints = currentPoints;
    }
    return currentPoints;

}

const showResults = (resultofRoll) => {
    const resultDiv = document.querySelector(".roll__result");
    const pointsDiv = document.querySelector(".current__points");
    roundResultDiv.innerHTML = gameState[roundResult];
    resultDiv.innerHTML = resultofRoll.resultOfFirstRoll + " + " + resultofRoll.resultOfSecondRoll + " = " + resultofRoll.twoDices;
    pointsDiv.innerHTML = "Aktualny stan punktów to: " + currentPoints;

}

const handleRoll = () => {
    let resultOfRoll = rollADice();
    updateState(resultOfRoll);
    showResults(resultOfRoll);
}

btnRoll.addEventListener("click", handleRoll);