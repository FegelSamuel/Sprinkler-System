```mermaid
graph TD
    A["Solar Power"] --> B["Main Arduino"]
    B --> G["Relay Module"]
    G --> H["Solenoid"]
    H --> M["Water Valve"]
    B["Main Arduino"] --> C["Wifi"]
    C["Wifi"] --> E["API"]
    E["API"] --> C["Wifi"]
    C["Wifi"] --> F["SMS"]
    C["Wifi"] --> B["Main Arduino"]
    D["Moisture Sensors"] --> B["Main Arduino"]
    B --> D
    classDef red fill:#f45,stroke:#333,stroke-width:2px;
    style B color:black;
    class B red;
```
![image](https://github.com/user-attachments/assets/d68c5a31-e9aa-4860-8424-8cb221ad2543)
