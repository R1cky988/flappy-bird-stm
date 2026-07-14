# Flappy Bird STM32

Một phiên bản clone của tựa game kinh điển **Flappy Bird** được phát triển trên dòng vi điều khiển STM32.

## Tính năng
- Trải nghiệm lại tựa game Flappy Bird truyền thống mượt mà trên phần cứng nhúng.
- Giao diện đồ họa (GUI) được thiết kế trực quan bằng framework **TouchGFX**.
- Quản lý ngoại vi và dự án thông qua **STM32CubeIDE**.
- Có thể chạy trực tiếp trên các kit phát triển như STM32F429I-DISCO (tùy thuộc vào cấu hình board trong file .ioc).

## Cấu trúc dự án
- `FlappyBird/`: Thư mục gốc chứa toàn bộ mã nguồn của game.
  - `Core/`: Chứa source logic C/C++ và cấu hình phần cứng của vi điều khiển.
  - `TouchGFX/`: Các file giao diện, hình ảnh, resources được gen ra từ TouchGFX Designer.
  - `STM32CubeIDE/`: Chứa project để mở bằng IDE.

## Hướng dẫn sử dụng
1. Clone repository này về máy:
   ```bash
   git clone https://github.com/R1cky988/flappy-bird-stm.git
   ```
2. Mở thư mục `FlappyBird` bằng phần mềm **STM32CubeIDE**.
3. Build project và nạp (Flash) code vào vi điều khiển STM32 của bạn.
4. Tận hưởng trò chơi!
