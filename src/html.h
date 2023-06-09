const char htmlMessage[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <title>Устройство АВЭБ</title>
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Oswald:wght@200;400;700&display=swap" rel="stylesheet">
    <link rel="stylesheet" href="index.css">
</head>

<body class="body">
    <style>
        form {
            margin-bottom: 20px;
        }

        form label {
            display: block;
            margin-bottom: 10px;
        }

        form input[type="text"] {
            padding: 5px;
            font-size: 16px;
            border: 1px solid #ccc;
            border-radius: 3px;
            width: 100%;
            max-width: 500px;
        }

        form button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #008CBA;
            color: #fff;
            border: none;
            border-radius: 3px;
            cursor: pointer;
        }

        .ticket {
            margin-bottom: 20px;
            padding: 10px;
            border: 1px solid #ccc;
            border-radius: 3px;
            background-color: #f9f9f9;
            box-shadow: 0 2px 2px rgba(0, 0, 0, 0.1);
        }

        .ticket h2 {
            margin-top: 0;
            margin-bottom: 10px;
            font-size: 20px;
        }

        .ticket ul {
            list-style: none;
            margin: 0;
            padding: 0;
        }

        .ticket ul li {
            margin-bottom: 5px;
        }

        button.print {
            display: block;
            margin-top: 20px;
            padding: 10px 20px;
            font-size: 16px;
            background-color: #008CBA;
            color: #fff;
            border: none;
            border-radius: 3px;
            cursor: pointer;
        }


        .body {
            display: flex;
            flex-direction: column;
            align-items: center;
            background-color: #c2dada;
        }

        .form {
            display: flex;
            flex-direction: column;
        }

        .numberLabel {
            display: flex;
            flex-direction: column;
            align-items: center;
        }

        .quastionsLabel {
            display: flex;
            flex-direction: column;
            margin: 25px 0 10px 0;
        }

        .labelText {
            margin: 25px 0 10px 0;
            align-self: center;
            font-size: 25px;
        }

        .buttonsBlock {
            margin-top: 10px;
            display: flex;
            flex-direction: column;
            gap: 10px;
            align-items: center;
            font-family: Oswald;
        }

        .button {
            width: 300px;
            height: 50px;
            background-color: #E8A87C;
            border-radius: 10px;
            border: 0;
            cursor: pointer;
        }

        .quastionsTextArea {
            resize: none;
            width: 500px;
            height: 300px;
            background-color: aliceblue;
            border-radius: 10px;
            padding: 5px;
            border: 0;
            margin-top: 20px;
            font-family: Oswald;
        }

        .ticket-containe {
            padding: 15px;
        }

        .hide {
            display: none;
        }

        .button_clean {
            background-color: brown;
        }

        .quastionsNumber {
            width: 40px;
            margin: 5px;
            padding: 5px;
            border-radius: 5px;
            background-color: aliceblue;
            border: 0;
        }

        .ticket {
            background-color: #fff;
            border: 1px solid #ccc;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.2);
            padding: 10px;
            margin-bottom: 20px;
        }

        .ticket-containe {
            width: 400px;
        }

        .ticket__header {
            font-size: 18px;
            margin-bottom: 10px;
        }

        .ticket__list {
            list-style: none;
            margin: 0;
            padding: 0;
        }

        .ticket__list-item {
            font-size: 18px;
            line-height: 1.5;
            margin-bottom: 5px;
        }

        h1 {
            padding: 10px;
            border-radius: 3px;
            font-family: Oswald;
        }

        legend {
            width: 465px;
            margin: 25px 0 10px 0;
            font-size: 18px;
            font-family: Oswald;
            margin-left: 34px;
        }

        .h2 {
            font-size: 14px;
        }

        .buttonsBlock p {
            font-family: Oswald;
            font-weight: 600;
        }

        .kafedra {
            margin-bottom: 5px;
            margin-left: -366px;
            font-size: 18px;
            font-family: Oswald;
        }

        .predmet {
            margin-bottom: 5px;
            margin-left: -344px;
            font-size: 18px;
            font-family: Oswald;
        }

        .prepod {
            margin-bottom: 5px;
            margin-left: -325px;
            font-size: 18px;
            font-family: Oswald;
        }

        .ZavKaf {
            margin-bottom: 5px;
            margin-left: -271px;
            font-size: 18px;
            font-family: Oswald;
        }

        .kafedraTextArea {
            resize: none;
            width: 350px;
            height: 30px;
            background-color: aliceblue;
            border-radius: 10px;
            padding: 5px;
            border: 0;
            margin-left: -75px;
            font-family: Oswald;
        }

        .predmetTextArea {
            resize: none;
            width: 350px;
            height: 30px;
            background-color: aliceblue;
            border-radius: 10px;
            padding: 5px;
            border: 0;
            margin-left: -80px;
            font-family: Oswald;
        }

        .prepodTextArea {
            resize: none;
            width: 350px;
            height: 30px;
            background-color: aliceblue;
            border-radius: 10px;
            padding: 5px;
            border: 0;
            margin-left: -80px;
            font-family: Oswald;
        }

        .ZavKafTextArea {
            resize: none;
            margin-left: -80px;
            width: 350px;
            height: 30px;
            background-color: aliceblue;
            border-radius: 10px;
            padding: 5px;
            border: 0;
            font-family: Oswald;
        }

        .ticket-h {
            font-size: 14px;

        }
    </style>

    <h1>Устройство для автоматизированного составления и выдачи экзаменационных билетов на Esp8266 </h1>
    <p class="kafedra"> Кафедра: </p> <textarea class="kafedraTextArea" type="text" id="kafedra-input"></textarea>
    <p class="predmet"> Дисциплина: </p> <textarea class="predmetTextArea" type="text" id="predmet-input"></textarea>
    <p class="prepod"> Преподаватель: </p> <textarea class="prepodTextArea" type="text" id="prepod-input"></textarea>
    <p class="ZavKaf"> Заведующий кафедрой: </p> <textarea class="ZavKafTextArea" type="text"
        id="ZavKaf-input"></textarea>
    <legend>Введите вопросы и выберите нужное количество вопросов в билете</legend>
    <select name="siti" class="quastionsNumber">
        <option value="3" selected="selected">3</option>
        <option value="4">4</option>
        <option value="5">5</option>







        <textarea class="quastionsTextArea" type="text" id="question-input"
            placeholder="Одна строка - один вопрос"></textarea>
        <div class="buttonsBlock">

            <button class="button" type="button" id="add-question-button">
                <p>Добавить вопросы</p>
            </button>
            <button class="button hide button_clean" type="button" id="remove-question-button">
                <p>Очистить</p>
            </button>
            <button class="button" type="button" onclick="printTickets()">
                <p>Разрешить печать</p>
            </button>
            <button class="button" type="button" id="generate-tickets-button">
                <p>Сгенерировать билеты</p>
            </button>
        </div>

        <div class="ticket-containe" id="ticket-container"></div>
        <script>
            //присваиваем элементам переменные
            const questionInput = document.getElementById('question-input');
            const addQuestionButton = document.getElementById('add-question-button');
            const removeQuestionsButton = document.getElementById('remove-question-button');
            const ticketContainer = document.getElementById('ticket-container');
            const generateTicketsButton = document.getElementById('generate-tickets-button');
            const quastionsNumberInTicket = document.querySelector('.quastionsNumber');
            const kafedraG = document.getElementById('kafedra-input');
            const predmetG = document.getElementById('predmet-input');
            const prepodG = document.getElementById('prepod-input');
            const ZavKafG = document.getElementById('ZavKaf-input');

            //Добавление вопросов
            const addQuestions = (questionInput, questions) => {
                let question = questionInput.value;
                const questionsArray = question.split('\n');
                if (question) {
                    for (let i = 0; i < questionsArray.length; i++) {
                        if (questionsArray[i] !== '') {
                            questions.push(questionsArray[i]);
                        }
                    }
                    questionInput.value = '';
                }
            }
            //Вывод билетов
            const generateTicketHtml = (arr, index) => {
                let kafedra = kafedraG.value;
                let predmet = predmetG.value;
                let prepod = prepodG.value;
                let ZavKaf = ZavKafG.value;
                var today = new Date();
                var Time = today.toLocaleString();

                return `
            <div class="ticket">
            <p class="ticket__h">МИНОБРНАУКИ РОССИИ <p>
            <p class="ticket__h">Федеральное государственное бюджетное <p>
            <p class="ticket__h">\n образовательное учреждение высшего образования <p>
            <p class="ticket__h">САМАРСКИЙ ГОСУДАРСТВЕННЫЙ\n ТЕХНИЧЕСКИЙ УНИВЕРСИТЕТ </p>
            <h2 class="ticket__header">Экзаменационный билет №${index + 1}\n</h2>
            <p class="ticket__h">По дисциплине: ${predmet}\n</p>
            <p class="ticket__h">Кафедра: ${kafedra}\n</p>
            <ul class="ticket__list">
                ${arr.map((q, i) => `<li class="ticket__list-item">${i + 1}) ${q}\n</li>`).join('')}
            </ul>
            <p class="ticket__h">Преподаватель: ${prepod}\n</p>
            <p class="ticket__h">Заведующий кафедрой: ${ZavKaf}\n</p>
            <p class="ticket__h"> ${Time}\n</p>
            </div>
                `
            }

            //Массив вопросов
            let questions = [];

            // Функция для получения случайных вопросов
            function getRandomQuestions(questions) {
                const numQuestions = quastionsNumberInTicket.value;
                const shuffledQuestions = questions.sort(() => Math.random() - 0.5); // перемешиваем массив вопросов
                return shuffledQuestions.slice(0, numQuestions);// возвращаем первые numQuestions вопросов
            }

            function generateTickets() {
                const length = questions.length;
                const numTickets = Math.round(length / quastionsNumberInTicket.value);
                ticketContainer.innerHTML = '';
                // Создание билетов
                for (let i = 0; i < numTickets; i++) {
                    // Получение случайных вопросов
                    const randomQuestions = getRandomQuestions(questions);
                    // Создание нового массива без выбранных вопросов
                    const remainingQuestions = questions.filter((q) => !randomQuestions.includes(q));
                    // Создание HTML-разметки билета
                    const ticketHTML = generateTicketHtml(randomQuestions, i);
                    ticketContainer.insertAdjacentHTML('beforeend', ticketHTML);
                    // Обновление массива вопросов
                    questions = remainingQuestions;
                }
            }

            const removeQuastionsHandler = () => {
                addQuestionButton.classList.toggle('hide');
                removeQuestionsButton.classList.toggle('hide');
                questions = [];
                ticketContainer.innerHTML = '';
            }

            const addQuestionsHandler = () => {
                addQuestions(questionInput, questions);
                removeQuestionsButton.classList.toggle('hide');
                addQuestionButton.classList.toggle('hide');
            }
            // Удалить все вопросы из колонки
            removeQuestionsButton.addEventListener('click', removeQuastionsHandler);
            // Добавить в массив вопросов
            addQuestionButton.addEventListener('click', addQuestionsHandler);
            // Обработчик клика по кнопке генерации билетов
            generateTicketsButton.addEventListener('click', () => {
                if (quastionsNumberInTicket.value <= 0) {
                    alert('введите число вопросов в билете');
                    return;
                }
                generateTickets();
            })

            // Функция для печати билетов

            function printTickets() {

                // получить массив билетов
                var tickets = document.querySelectorAll('.ticket');
                var ArrString = [];

                for (let i = 0; i < tickets.length; i++) {
                    let ticket = tickets[i].textContent;
                    var ticketGood = ticket.replaceAll("  ", "");
                    ArrString.push(ticketGood);
                }
                console.log(ArrString);
            }

            var myHeaders = new Headers();
            myHeaders.append("Content-Type", "application/json");
            var raw = JSON.stringify(ArrString);
            var requestOptions = {
                method: 'POST',
                headers: myHeaders,
                body: raw,
                redirect: 'follow'
            };
            fetch("http://192.168.1.101/post", requestOptions)
                .then(response => response.text())
                .then(result => console.log(result))


        </script>
</body>

</html>
)rawliteral";