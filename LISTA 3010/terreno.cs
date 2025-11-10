using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite a largura do terreno: ");
        double largura = double.Parse(Console.ReadLine());
        
        Console.Write("Digite o comprimento do terreno: ");
        double comprimento = double.Parse(Console.ReadLine());
        
        Console.Write("Digite o valor do m²: ");
        double valorMetroQuadrado = double.Parse(Console.ReadLine());
        
        double area = largura * comprimento;
        double preco = area * valorMetroQuadrado;
        
        Console.WriteLine($"Área do terreno: {area:F2}");
        Console.WriteLine($"Preço do terreno: R$ {preco:F2}");
    }
}
