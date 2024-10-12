```mermaid
graph TD
    A["Solar Power"] --> B["Arduino"]
    B["Arduino"] --> H["Relay"]
    B["Arduino"] --> C["Wifi"]
    B["Arduino"] --> D["Moisture Sensor and Auxilary Arduino"]
    C["Wifi"] --> E["API"]
    C["Wifi"] --> F["SMS"]
    C["Wifi"] --> G["School"]
    D["Moisture Sensor"] --> B["Arduino"]
```
![image](https://github.com/user-attachments/assets/d68c5a31-e9aa-4860-8424-8cb221ad2543)
