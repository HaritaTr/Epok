# Epok Kaydırma ve Hız Vektör Hesabı

**Amaç;**
 ========

Hızları bilinen kartezyen koordinatlı noktalar ile sıklaştırma alanının üçgenlerle kaplandığını biliyoruz. Bu bilgi doğrultusunda; kartezyen koordinatları ile birlikte hızları bilinen 3 nokta arasında bulunan 4. noktanın hızlarının hesaplaması “Lineer Enterpolasyonla” yapılmaktadır. Ayrıca yazılım aşağıdaki bilgiler ışığında epok kaydırma ve epok hesaplamalarını yapmaktadır.

> **Hız vektörleri koordinatların yıllık hızlarını göstermektedir.**

> **Hızın hangi epok için tanımlandığı çok önemlidir.**

> **Nokta koordinatlarının ölçme epoğuna taşınması, referans epok bilgisine doğrudan bağlıdır.**

> **Referans epokları yıl biriminde tanımlanır.**

**Kullanım Rehberi;**
=====================

**Çalıştırıldığında;**

3 hesaplama göreceksiniz. Her bir hesaplama kendi içinde ayrı yapılmaktadır.

**1.** Hız vektörü hesaplamasında; projeksiyon koordinatları ve hız vektörleri bilinen 3 nokta ile sadece projeksiyon koordinatları bilinen 4. noktanın girilmesi gerekmektedir. Sıklaştırma alanımızda üç nokta ile üçgen oluşturduğumuz bölgenin içerisinde bulunan 4. noktanın hız vektörünü lineer enterpolasyon yöntemi ile buluruz.

**2.** Epok hesaplamasında; saat, gün, yıl değerlerini girerek ve ay değerini seçerek epok hesaplanır.

**3.** Epok kaydırma hesaplamasında; referans epoğunda (To) bulunan nokataların kartezyen koordinatları (X, Y, Z) (To) ve hız vektörleri (Vx, Vy, Vz) (To), bu değerler ile birlikte ölçü epoğu (T1) değerleri girilir. Girilen değerler sonrası epok kaydırma değeri seçilir.
