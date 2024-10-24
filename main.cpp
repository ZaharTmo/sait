
#include "crow.h"

int main() {
    crow::SimpleApp app;


    // Главная страница (Основная информация)
    CROW_ROUTE(app, "/")([]() {
        return R"(
        <html>
            <head>
                <title>Главная страница</title>
                <style>
                    body { background-color: #1a1a1a; color: #ccc; font-family: Arial, sans-serif; }
                    .container { max-width: 1200px; margin: 0 auto; padding: 20px; }
                    header, footer { background-color: #000; padding: 10px; text-align: center; color: white; }
                    section { margin-bottom: 40px; padding: 20px; background-color: #333; border-radius: 8px; }
                    h1, h2 { color: #fff; }
                    a { color: #ccc; text-decoration: none; }
                    a:hover { color: white; }
                    button { background-color: #000; color: #fff; padding: 10px 20px; border: none; cursor: pointer; }
                    button:hover { background-color: #333; }
                </style>
            </head>
            <body>
                <header>
                    <h1>Добро пожаловать на наш сайт</h1>
                    <nav>
                        <a href='/buy'>Купить</a> | 
                        <a href='/stats'>Статистика</a> | 
                        <a href='/contact'>Контактные данные</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>Основная информация</h2>
                        <p>Это основной блок информации о нашем продукте или услуге. Здесь можно кратко описать, чем занимается ваша компания.</p>
                        <button onclick="location.href='/buy'">Купить сейчас</button>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 Ваш сайт</p>
                </footer>
            </body>
        </html>
        )";
        });

    // Страница "Купить"
    CROW_ROUTE(app, "/buy")([]() {
        return R"(
        <html>
            <head>
                <title>Купить</title>
                <style>
                    body { background-color: #1a1a1a; color: #ccc; font-family: Arial, sans-serif; }
                    .container { max-width: 1200px; margin: 0 auto; padding: 20px; }
                    header, footer { background-color: #000; padding: 10px; text-align: center; color: white; }
                    section { margin-bottom: 40px; padding: 20px; background-color: #333; border-radius: 8px; }
                    h1, h2 { color: #fff; }
                    button { background-color: #000; color: #fff; padding: 10px 20px; border: none; cursor: pointer; }
                    button:hover { background-color: #333; }
                </style>
            </head>
            <body>
                <header>
                    <h1>Купить</h1>
                    <nav>
                        <a href='/'>Главная</a> | 
                        <a href='/stats'>Статистика</a> | 
                        <a href='/contact'>Контактные данные</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>Наши предложения</h2>
                        <p>Вы можете выбрать продукт и оформить покупку. Здесь можно добавить информацию о товарах, которые вы предлагаете.</p>
                        <button>Оформить покупку</button>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 Ваш сайт</p>
                </footer>
            </body>
        </html>
        )";
        });


// Страница "Статистика"
CROW_ROUTE(app, "/stats")([]() {
    return R"(
        <html>
            <head>
                <title>Статистика</title>
                <style>
                    body { background-color: #1a1a1a; color: #ccc; font-family: Arial, sans-serif; }
                    .container { max-width: 1200px; margin: 0 auto; padding: 20px; }
                    header, footer { background-color: #000; padding: 10px; text-align: center; color: white; }
                    section { margin-bottom: 40px; padding: 20px; background-color: #333; border-radius: 8px; }
                    h1, h2 { color: #fff; }
                </style>
            </head>
            <body>
                <header>
                    <h1>Статистика</h1>
                    <nav>
                        <a href='/'>Главная</a> | 
                        <a href='/buy'>Купить</a> | 
                        <a href='/contact'>Контактные данные</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>Данные о продажах</h2>
                        <p>Здесь можно добавить диаграммы и графики с данными о продажах, пользователях и других метриках.</p>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 Ваш сайт</p>
                </footer>
            </body>
        </html>
        )";
    });

// Страница "Контактные данные"
CROW_ROUTE(app, "/contact")([]() {
    return R"(
        <html>
            <head>
                <title>Контактные данные</title>
                <style>
                    body { background-color: #1a1a1a; color: #ccc; font-family: Arial, sans-serif; }
                    .container { max-width: 1200px; margin: 0 auto; padding: 20px; }
                    header, footer { background-color: #000; padding: 10px; text-align: center; color: white; }
                    section { margin-bottom: 40px; padding: 20px; background-color: #333; border-radius: 8px; }
                    h1, h2 { color: #fff; }
                    input, textarea { width: 100%; padding: 10px; margin-top: 10px; background-color: #222; color: #ccc; border: none; border-radius: 5px; }
                    button { background-color: #000; color: #fff; padding: 10px 20px; border: none; cursor: pointer; }
                    button:hover { background-color: #333; }
                </style>
            </head>
            <body>
                <header>
                    <h1>Контактные данные</h1>
                    <nav>
                        <a href='/'>Главная</a> | 
                        <a href='/buy'>Купить</a> | 
                        <a href='/stats'>Статистика</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>Свяжитесь с нами</h2>
                        <form>
                            <label>Имя:</label>
                            <input type="text" name="name" required>
                            
                            <label>Email:</label>
                            <input type="email" name="email" required>
                            
                            <label>Сообщение:</label>
                            <textarea name="message" rows="5" required></textarea>
                            
                            <button type="submit">Отправить</button>
                        </form>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 Ваш сайт</p>
                </footer>
            </body>
        </html>
        )";
    });

// Запускаем сервер на порту 8080
app.port(8080).multithreaded().run();
}
