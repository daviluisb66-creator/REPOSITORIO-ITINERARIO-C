using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Cidades disponíveis:");
        Console.WriteLine("1 - Morros (R$ 120,00)");
        Console.WriteLine("2 - Barreirinhas (R$ 200,00)");
        Console.WriteLine("3 - Bacabeira (R$ 50,00)");
        Console.WriteLine("4 - Rosário (R$ 80,00)");
        
        Console.Write("Digite o código do destino: ");
        int codigo = int.Parse(Console.ReadLine());
        
        Console.Write("É ida e volta? (S/N): ");
        string idaVolta = Console.ReadLine().ToUpper();
        
        double valorPassagem = 0;
        
        switch(codigo)
        {
            case 1:
                valorPassagem = 120.00;
                break;
            case 2:
                valorPassagem = 200.00;
                break;
            case 3:
                valorPassagem = 50.00;
                break;
            case 4:
                valorPassagem = 80.00;
                break;
            default:
                Console.WriteLine("Código inválido!");
                return;
        }
        
        if(idaVolta == "S")
        {
            valorPassagem *= 2;
            valorPassagem
