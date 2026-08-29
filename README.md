# logging – Zeitstempel-Logging

Minimales, thread-sicheres Logging für C: `logging_log_message` schreibt
jede Meldung mit Monoton-Nanosekunden-Stempel (relativ zur ersten Meldung)
auf `stdout` und flusht sofort.

## Umfang

- `logging_log_message(const char* message)` – leerer String wird ignoriert.
- Intern kritische Sektion (`threading_critical_section`), initialisiert
  beim ersten Aufruf.

## Nutzung

```c
#include <logging/logging.h>

logging_log_message("startup begin.");
```

Ausgabe:

```
[00000000000000000123]: startup begin.
```

## Abhängigkeiten

- `threading` (kritische Sektion)

## Wiki

Dokumentation: [logging – Zeitstempel-Logging](https://czybor.i234.me/wiki/sw-module/logging/) (Quartz-Wiki)

## Build

```bash
cmake -S . -B build
cmake --build build
```

In ein Projekt einbinden: `add_subdirectory(../../libraries/logging …)`,
Einbindung des Headers über den Include-Pfad `<logging/logging.h>`.