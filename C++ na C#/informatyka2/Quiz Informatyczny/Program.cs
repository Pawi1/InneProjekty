// Program made by Pawil [ C++ -> C# ]
using System;
using System.Configuration;
using System.Security.Cryptography;
using System.Threading;
using System.IO;
using System.Text;
namespace QuizInformatyczny
{
    class Program
    {
        static void Main(string[] args)
        {
        Reset:
            Console.Clear();
            if (GetAppIntroduction() == true) return;
            int points = GetQuiz();
            if (GetAppEnd(points) == true) goto Reset;
        }

        static void GetAppInfo()
        {
            string appName = "Quiz Informatyczny";
            string appAuthor = "Pawil";
            Console.WriteLine("┌─────────────────────────────────┐");
            Console.Write("│");
            PrintColorMessage(ConsoleColor.Cyan ,$"[{appName}] Autor: {appAuthor}");
            Console.Write("│");
            Console.WriteLine("\n└─────────────────────────────────┘");
            
        }
        static void PrintColorMessage(ConsoleColor color, string message)
        {
            Console.ForegroundColor = color;
            Console.Write(message);
            Console.ResetColor();
        }
        static bool GetAppIntroduction()
        {
            GetAppInfo();
            Console.Write("Witaj w quizie informatycznym!");
            Thread.Sleep(2000);

            Console.Clear();
            GetAppInfo();
            Console.WriteLine("Przed tobą będzie 15 pytań o różnym stopniu trudności. ");
            PrintColorMessage(ConsoleColor.Green, "Łatwym");
            Console.Write(" , ");
            PrintColorMessage(ConsoleColor.Yellow, "Średnim");
            Console.Write(" i ");
            PrintColorMessage(ConsoleColor.Red, "Trudnym");
            Console.Write(".");
            Thread.Sleep(2555);
          A:
            Console.Clear();
            GetAppInfo();

            ConsoleKeyInfo cki;
            Console.Write("Naciśnij Enter aby rozpocząć program, albo naciśnij Escape aby zakończyć program: ");
            cki = Console.ReadKey();
            if (cki.Key == ConsoleKey.Enter)
            {
                Console.Clear();
                GetAppInfo();
                Console.Write("OK zaczynamy:");
                Thread.Sleep(2000);
                return false;
            }
            else if (cki.Key == ConsoleKey.Escape)
            {
                return true;
            }
            else
            {
                goto A;
            }
        }
       
        static int Quiz(int points_input,int level,string difficulty, string question, string answer1 , string answer2, string answer3, ConsoleKey correct, ConsoleKey false1, ConsoleKey false2)
        {
        int points_output = points_input;
        ConsoleColor color = ConsoleColor.White;
        QUIZ:
            if (difficulty == "Łatwy")
            {
                color = ConsoleColor.Green;
            }
            else if (difficulty == "Średni")
            {
                color = ConsoleColor.Yellow;
            }
            else if (difficulty == "Trudny")
            { 
                color= ConsoleColor.Red;   
            }
            
            Console.Clear();
            Thread.Sleep(2000);
            GetAppInfo();
            Console.Write($"Pytanie nr {level} Poziom: ");
            Console.ForegroundColor = color;
            Console.Write(difficulty);
            Console.ResetColor();
            Console.WriteLine("\n");
            PrintColorMessage(ConsoleColor.DarkCyan, question);
            Console.WriteLine("\n");
            PrintColorMessage(ConsoleColor.DarkRed, "A: ");
            Console.WriteLine(answer1);
            PrintColorMessage(ConsoleColor.DarkMagenta, "B: ");
            Console.WriteLine(answer2);
            PrintColorMessage(ConsoleColor.DarkYellow, "C: ");
            Console.WriteLine(answer3);
            Console.Write("\nPoprawna odpowiedź to: ");


            
            ConsoleKeyInfo p1 = Console.ReadKey();

            if (p1.Key == correct)
            {
                Console.WriteLine("\n");
                PrintColorMessage(ConsoleColor.DarkGreen, "Poprawna odpowiedz");
                Console.WriteLine(". + 100 punktów.");
                points_output = points_output + 100;
            }
            else if (p1.Key == false1)
            {
                Console.WriteLine("\n");
                PrintColorMessage(ConsoleColor.DarkRed, "Błędna odpowiedz");
                Console.WriteLine(". - 100 punktów.");
                points_output = points_output - 100;

            }
            else if (p1.Key == false2)
            {

                Console.WriteLine("\n");
                PrintColorMessage(ConsoleColor.DarkRed, "Błędna odpowiedz");
                Console.WriteLine(". - 100 punktów.");
                points_output = points_output - 100;

            }
            else
            {
                goto QUIZ;
            }

            return points_output;
        }
        static int GetQuiz()
        {
            int points = 0;
            points = Quiz(points, 1, "Łatwy", "Mysz komputerowa to urządzenie: ", "Wejścia ", "Wyjścia ", "Wejścia i Wyjścia ", ConsoleKey.A, ConsoleKey.B, ConsoleKey.C);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 2, "Łatwy", "Kserokopiarka to urządzenie: ", "Wejścia ", "Wyjścia ", "Wejścia i Wyjścia ", ConsoleKey.C, ConsoleKey.B, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 3, "Łatwy", "Głośnik to urządzenie: ", "Wejścia ", "Wyjścia ", "Wejścia i Wyjścia ", ConsoleKey.B, ConsoleKey.C, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 4, "Łatwy", "Kamerka internetowa to urządzenie: ", "Wejścia ", "Wyjścia ", "Wejścia i Wyjścia ", ConsoleKey.A, ConsoleKey.B, ConsoleKey.C);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 5, "Łatwy", "Który z podanych systemów operacyjnych jest otwartoźródłowy: ", "Windows ", "Mac OS ", "Linux ", ConsoleKey.C, ConsoleKey.B, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 6, "Średni", "Na którym systemie został oparty Android: ", "Windows ", "Linux ", "Android nie jest na żadnym systemie oparty ", ConsoleKey.B, ConsoleKey.C, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 7, "Średni", "Popularny skrót na procesor to: ", "GPU ", "CPU", "RAM ", ConsoleKey.B, ConsoleKey.C, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 8, "Średni", "Popularny skrót na kartę graficzną to: ", "GPU ", "CPU", "RAM ", ConsoleKey.A, ConsoleKey.C, ConsoleKey.B);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 9, "Średni", "Skrót na dysk twardy (mechaniczny) to: ", "SSD ", "HDD ", "SSHD ", ConsoleKey.B, ConsoleKey.C, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 10, "Trudny", "Jaką architektuje procesora posiada twój komputer: ", "ARM ", "x86-64 ", "PowerPC ", ConsoleKey.B, ConsoleKey.C, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);

            points = Quiz(points, 11, "Trudny", "Jaki typ karty graficznej posiada typowy komputer do gier: ", "Zintegowana ", "Nie zintegowana ", "Dedykowana ", ConsoleKey.C, ConsoleKey.B, ConsoleKey.A);
            Console.WriteLine($"Aktualna liczba punktów: {points}");
            Thread.Sleep(2000);
            return (points);
        }
        static bool GetAppEnd(int points_input)
        {
            
            int points = points_input;
            Console.Clear();
            GetAppInfo();
            PrintColorMessage(ConsoleColor.Green, "Gratulacje ukończyłeś cały quiz! Teraz wpisz swoje imie: ");
            string name = Console.ReadLine();
            Console.WriteLine("\n");
            
            string path = @"Wyniki.txt";
            if (!File.Exists(path))
            {
                string[] createText = { "Wyniki:" };
                File.WriteAllLines(path, createText);
            } 
            
            string appendText = $"- [{name}]: Punkty: {points}, Czas: {DateTime.Now}" + Environment.NewLine;
            File.AppendAllText(path, appendText);
            
            string[] readText = File.ReadAllLines(path);
            foreach (string s in readText)
            {
                Console.WriteLine(s);
            }

            Console.WriteLine("Naciśnij Enter aby wyłączyć program lub R aby rozpocząć program od początku");
            
            ConsoleKeyInfo rk = Console.ReadKey();
            if (rk.Key == ConsoleKey.R)
            {
                return true;
            }
            else if (rk.Key == ConsoleKey.Enter)
            {

                return false;
            }
            else
            { 
               return false;
            }
        }
    
    }
}
