# Eye Display - ESP32-C3 + GC9A01A

Projeto de demonstração de animação gráfica com um "olho digital" usando uma placa **ESP32-C3 (2424S012)** e display redondo **GC9A01A 240x240**.

## Hardware

- **Placa**: ESP32-C3 (modelo 2424S012)
- **Display**: GC9A01A 1.28" 240x240 SPI
- **Conexões**:

| Sinal    | Pino ESP32-C3 | Descrição           |
|----------|----------------|---------------------|
| MOSI     | GPIO 7         | SPI MOSI            |
| SCLK     | GPIO 6         | SPI Clock           |
| CS       | GPIO 10        | Chip Select         |
| DC       | GPIO 2         | Data/Command        |
| RST      | -1             | Sem reset (não usado) |
| BL (LED) | GPIO 3         | Backlight on/off    |


## Funcionamento

- O projeto renderiza um olho estático (ou animado, com futura extensão) na tela inteira (240x240).
- A imagem é convertida para um array RGB565 e exibida diretamente via `drawRGBBitmap()` da biblioteca `Adafruit_GFX`.

---

## Instalação

1. Clone o repositório:
   ```bash
   git clone https://github.com/JulioAprigio8/eye-display-esp32c3-gc9a01a.git
