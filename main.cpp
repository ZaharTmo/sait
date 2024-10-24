
#include "crow.h"

int main() {
    crow::SimpleApp app;


    // ������� �������� (�������� ����������)
    CROW_ROUTE(app, "/")([]() {
        return R"(
        <html>
            <head>
                <title>������� ��������</title>
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
                    <h1>����� ���������� �� ��� ����</h1>
                    <nav>
                        <a href='/buy'>������</a> | 
                        <a href='/stats'>����������</a> | 
                        <a href='/contact'>���������� ������</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>�������� ����������</h2>
                        <p>��� �������� ���� ���������� � ����� �������� ��� ������. ����� ����� ������ �������, ��� ���������� ���� ��������.</p>
                        <button onclick="location.href='/buy'">������ ������</button>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 ��� ����</p>
                </footer>
            </body>
        </html>
        )";
        });

    // �������� "������"
    CROW_ROUTE(app, "/buy")([]() {
        return R"(
        <html>
            <head>
                <title>������</title>
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
                    <h1>������</h1>
                    <nav>
                        <a href='/'>�������</a> | 
                        <a href='/stats'>����������</a> | 
                        <a href='/contact'>���������� ������</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>���� �����������</h2>
                        <p>�� ������ ������� ������� � �������� �������. ����� ����� �������� ���������� � �������, ������� �� �����������.</p>
                        <button>�������� �������</button>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 ��� ����</p>
                </footer>
            </body>
        </html>
        )";
        });


// �������� "����������"
CROW_ROUTE(app, "/stats")([]() {
    return R"(
        <html>
            <head>
                <title>����������</title>
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
                    <h1>����������</h1>
                    <nav>
                        <a href='/'>�������</a> | 
                        <a href='/buy'>������</a> | 
                        <a href='/contact'>���������� ������</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>������ � ��������</h2>
                        <p>����� ����� �������� ��������� � ������� � ������� � ��������, ������������� � ������ ��������.</p>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 ��� ����</p>
                </footer>
            </body>
        </html>
        )";
    });

// �������� "���������� ������"
CROW_ROUTE(app, "/contact")([]() {
    return R"(
        <html>
            <head>
                <title>���������� ������</title>
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
                    <h1>���������� ������</h1>
                    <nav>
                        <a href='/'>�������</a> | 
                        <a href='/buy'>������</a> | 
                        <a href='/stats'>����������</a>
                    </nav>
                </header>

                <div class="container">
                    <section>
                        <h2>��������� � ����</h2>
                        <form>
                            <label>���:</label>
                            <input type="text" name="name" required>
                            
                            <label>Email:</label>
                            <input type="email" name="email" required>
                            
                            <label>���������:</label>
                            <textarea name="message" rows="5" required></textarea>
                            
                            <button type="submit">���������</button>
                        </form>
                    </section>
                </div>

                <footer>
                    <p>&copy; 2024 ��� ����</p>
                </footer>
            </body>
        </html>
        )";
    });

// ��������� ������ �� ����� 8080
app.port(8080).multithreaded().run();
}
