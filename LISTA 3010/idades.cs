using System;

class Program
{
    static void Main()
    {
        Console.Write("Nome da primeira pessoa: ");
        string nome1 = Console.ReadLine();
        Console.Write("Idade da primeira pessoa: ");
        int idade1 = int.Parse(Console.ReadLine());
        
        Console.Write("Nome da segunda pessoa: ");
        string nome2 = Console.ReadLine();
        Console.Write("Idade da segunda pessoa: ");
        int idade2 = int.Parse(Console.ReadLine());
        
        double media = (idade1 + idade2) / 2.0;
        
        Console.WriteLine($"A idade média entre {nome1} e {nome2} é {media:F1} anos.");
    }
}
