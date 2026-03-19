// =====================
// KONFIGURASI PIN
// =====================
int merah1 = 2, kuning1 = 3, hijau1 = 4;   // Utara
int merah2 = 5, kuning2 = 6, hijau2 = 7;   // Timur
int merah3 = 8, kuning3 = 9, hijau3 = 10;  // Selatan
int merah4 = 11, kuning4 = 12, hijau4 = 13; // Barat

// =====================
// SETUP
// =====================
void setup() {
  pinMode(merah1, OUTPUT); pinMode(kuning1, OUTPUT); pinMode(hijau1, OUTPUT);
  pinMode(merah2, OUTPUT); pinMode(kuning2, OUTPUT); pinMode(hijau2, OUTPUT);
  pinMode(merah3, OUTPUT); pinMode(kuning3, OUTPUT); pinMode(hijau3, OUTPUT);
  pinMode(merah4, OUTPUT); pinMode(kuning4, OUTPUT); pinMode(hijau4, OUTPUT);

  semuaMerah(); // default semua merah
}

// =====================
// LOOP
// =====================
void loop() {
  aktifkanSimpang(1); // Utara
  aktifkanSimpang(2); // Timur
  aktifkanSimpang(3); // Selatan
  aktifkanSimpang(4); // Barat
}

// =====================
// FUNGSI AKTIFKAN SIMPANG
// =====================
void aktifkanSimpang(int jalur) {

  // 1. Semua MERAH dulu (default kondisi aman)
  semuaMerah();
  delay(500); // jeda transisi

  // 2. Matikan merah jalur aktif
  if (jalur == 1) digitalWrite(merah1, LOW);
  if (jalur == 2) digitalWrite(merah2, LOW);
  if (jalur == 3) digitalWrite(merah3, LOW);
  if (jalur == 4) digitalWrite(merah4, LOW);

  // 3. Nyalakan HIJAU (5 detik)
  if (jalur == 1) digitalWrite(hijau1, HIGH);
  if (jalur == 2) digitalWrite(hijau2, HIGH);
  if (jalur == 3) digitalWrite(hijau3, HIGH);
  if (jalur == 4) digitalWrite(hijau4, HIGH);

  delay(5000);

  // 4. Matikan HIJAU sebelum KUNING
  if (jalur == 1) digitalWrite(hijau1, LOW);
  if (jalur == 2) digitalWrite(hijau2, LOW);
  if (jalur == 3) digitalWrite(hijau3, LOW);
  if (jalur == 4) digitalWrite(hijau4, LOW);

  // 5. KUNING kedip 3x (±2 detik)
  for (int i = 0; i < 3; i++) {
    if (jalur == 1) digitalWrite(kuning1, HIGH);
    if (jalur == 2) digitalWrite(kuning2, HIGH);
    if (jalur == 3) digitalWrite(kuning3, HIGH);
    if (jalur == 4) digitalWrite(kuning4, HIGH);

    delay(300);

    if (jalur == 1) digitalWrite(kuning1, LOW);
    if (jalur == 2) digitalWrite(kuning2, LOW);
    if (jalur == 3) digitalWrite(kuning3, LOW);
    if (jalur == 4) digitalWrite(kuning4, LOW);

    delay(300);
  }

  // 6. Kuning nyala sisa waktu
  if (jalur == 1) digitalWrite(kuning1, HIGH);
  if (jalur == 2) digitalWrite(kuning2, HIGH);
  if (jalur == 3) digitalWrite(kuning3, HIGH);
  if (jalur == 4) digitalWrite(kuning4, HIGH);

  delay(800);

  // 7. Matikan kuning
  if (jalur == 1) digitalWrite(kuning1, LOW);
  if (jalur == 2) digitalWrite(kuning2, LOW);
  if (jalur == 3) digitalWrite(kuning3, LOW);
  if (jalur == 4) digitalWrite(kuning4, LOW);

  // 8. KEMBALI KE SEMUA MERAH (WAJIB SESUAI SOAL)
  semuaMerah();
  delay(1000); // jeda sebelum pindah jalur
}

// =====================
// SEMUA MERAH
// =====================
void semuaMerah() {
  digitalWrite(merah1, HIGH);
  digitalWrite(merah2, HIGH);
  digitalWrite(merah3, HIGH);
  digitalWrite(merah4, HIGH);

  digitalWrite(kuning1, LOW); digitalWrite(hijau1, LOW);
  digitalWrite(kuning2, LOW); digitalWrite(hijau2, LOW);
  digitalWrite(kuning3, LOW); digitalWrite(hijau3, LOW);
  digitalWrite(kuning4, LOW); digitalWrite(hijau4, LOW);
}