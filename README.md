# 🚦 Traffic Light 4 Arah - Arduino Uno

Nama  : Revalina Fidiya Anugrah  
NIM   : H1D023011  
Mata Kuliah : Pemrograman Sistem Tertanam  

## 📌 Deskripsi Project
Project ini merupakan implementasi sistem **lampu lalu lintas 4 arah** menggunakan Arduino Uno berbasis GPIO. Sistem dibuat menggunakan simulasi di Tinkercad sebagai bagian dari tugas mata kuliah Pemrograman Sistem Tertanam.

---

## 🎯 Fitur Sistem
- 4 simpang (Utara, Timur, Selatan, Barat)
- Lampu hijau menyala bergiliran searah jarum jam
- Waktu:
  - Hijau: 5 detik
  - Kuning: kedip 3x + total 2 detik
  - Merah: aktif saat jalur lain berjalan
- Tidak ada konflik antar jalur
- Sistem berjalan terus (loop)

---

## 🧠 Konsep yang Digunakan
- GPIO (General Purpose Input Output)
- Struktur program Arduino (`setup()` dan `loop()`)
- Modular function (`aktifkanSimpang()`)

---

## 🔌 Wiring Diagram
Lihat pada folder:
`documentation/`

---

## 🖥️ Video Hasil Simulasi
Lihat pada folder:
`documentation/`

---

## 💻 Source Code
Lihat pada folder:
`code/traffic_light.ino`

---

## 🔗 Link Tinkercad
https://www.tinkercad.com/things/iFkcVMNSzt2-percobaan-traffic-4-simpang

---

## 📄 Laporan
Laporan lengkap terdapat pada folder:
`laporan/`


---

##  Catatan
Project ini dibuat untuk memenuhi Tugas 3 (Mini Project GPIO) dan telah memenuhi semua spesifikasi:
- Timing sesuai
- Tidak ada konflik lampu
- Sistem berjalan stabil dan berulang

---

## 🔄 Alur Sistem
1. Semua lampu merah (default)
2. Jalur aktif → hijau (5 detik)
3. Transisi → kuning (kedip)
4. Kembali ke merah
5. Berpindah ke jalur berikutnya
