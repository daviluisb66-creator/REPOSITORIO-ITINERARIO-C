using System;

class Program
{
    static void Main()
    {
        Console.Write("Preço unitário do produto: ");
        double precoUnitario = double.Parse(Console.ReadLine());
        
        Console.Write("Quantidade comprada: ");
        int quantidade = int.Parse(Console.ReadLine());
        
        Console.Write("Dinheiro recebido: ");
        double dinheiroRecebido = double.Parse(Console.ReadLine());
        
        double total = precoUnitario * quantidade;
        double troco = dinheiroRecebido - total;
        
        Console.WriteLine($"TROCO = R$ {troco:F2}");
    }
}
