## 📡 Monitoramento de Temperatura com Raspberry Pi Pico


Este projeto utiliza o Raspberry Pi Pico para medir a temperatura através do ADC (Conversor Analógico-Digital) e exibir a leitura em Fahrenheit no console.

---

## 📌 Características

✅ Leitura da temperatura usando o ADC do Raspberry Pi Pico.  
✅ Conversão de tensão analógica para temperatura em Celsius.  
✅ Conversão de Celsius para Fahrenheit.  
✅ Exibição contínua dos valores na comunicação serial.

---

## 📂 Estrutura do Projeto

📁 `main.c` - Código principal para leitura e conversão da temperatura.

---

## 🛠️ Requisitos

🔹 Raspberry Pi Pico  
🔹 Sensor de temperatura conectado ao pino ADC 0 (GPIO 26)  
🔹 SDK do Raspberry Pi Pico instalado  
🔹 Compilador C compatível (como `arm-none-eabi-gcc`)  

---

## 🚀 Como Compilar e Executar

1️⃣ Clone o repositório:  
```sh
git clone https://github.com/seu-usuario/seu-repositorio.git
cd seu-repositorio
```

2️⃣ Compile o código usando CMake:  
```sh
mkdir build && cd build
cmake ..
make
```

3️⃣ Faça o upload do firmware para o Raspberry Pi Pico:  
🔹 Pressione e segure o botão `BOOTSEL` no Pico e conecte-o ao computador via USB.  
🔹 Copie o arquivo `.uf2` gerado para a unidade montada do Pico.  

4️⃣ Abra um monitor serial para visualizar a saída:  
```sh
minicom -b 115200 -o -D /dev/ttyUSB0
```

---

## 🖥️ Simulação Online

Você pode testar este projeto diretamente no Wokwi através do link abaixo:  
🔗 **[Simulação no Wokwi](https://wokwi.com/projects/421396548208238593)

---

## 📜 Licença

Este projeto está licenciado sob a **MIT License** - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

---

## 🤝 Contribuição

💡 Contribuições são bem-vindas! Sinta-se à vontade para abrir uma *issue* ou um *pull request*.

---

## 👨‍💻 Autor

Feito por **[Cleidson Bruno](https://github.com/CleidsonBruno)
🔗 **[LinkedIn](https://br.linkedin.com/in/cleidsonbruno)

