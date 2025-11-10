using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite a altura (m): ");
        double altura = double.Parse(Console.ReadLine());
        
        Console.Write("Digite o peso (kg): ");
        double peso = double.Parse(Console.ReadLine());
        
        double imc = peso / (altura * altura);
        
        Console.WriteLine($"IMC: {imc:F2}");
    }
}
