DROP TABLE IF EXISTS pracownicy;
DROP TABLE IF EXISTS kontakty;
DROP TABLE IF EXISTS place;
DROP TABLE IF EXISTS stanowiska;

CREATE TABLE pracownicy
(
    id_pracownika INTEGER PRIMARY KEY,
    imie TEXT(20),
    nazwisko TEXT(20),
    kod STRING(10),
    miasto_z TEXT(20),
    ulica TEXT(20),
    data_u DATA,
    miasto_u TEXT(20)
);

CREATE TABLE kontakty
(
    id_pracownika INTEGER NOT NULL,
    typ_k BOOLEAN,
    kontakt INTEGER,
    uwagi TEXT(20),
    FOREIGN KEY (id_pracownika) REFERENCES pracownicy(id_pracownika)
);

CREATE TABLE stanowiska
(
    id_stanowiska INTEGER PRIMARY KEY AUTOINCREMENT,
    stanowisko TEXT
);


CREATE TABLE place
(
    id_p INTEGER NOT NULL,
    id_s INTEGER,
    placa INTEGER,
    data_z DATE,
    FOREIGN KEY (id_p) REFERENCES kontakty(id_pracownika),
    FOREIGN KEY (id_s) REFERENCES stanowiska(id_stanowiska)
);

